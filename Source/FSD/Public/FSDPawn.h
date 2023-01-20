#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "BoolDelegateDelegate.h"
#include "EPawnAttitude.h"
#include "ProjectileSpawner.h"
#include "Targetable.h"
#include "FSDPawn.generated.h"

class AActor;
class AFSDAIController;
class UEnemyDescriptor;
class UEnemyTemperatureComponent;
class UHealthComponentBase;
class UPawnStatsComponent;
class USkeletalMeshComponent;
class UStatusEffectsComponent;

UCLASS(Abstract, Blueprintable)
class AFSDPawn : public APawn, public IGameplayTagAssetInterface, public ITargetable, public IProjectileSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnFrozenEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyTemperatureComponent* Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* SpawnedFromDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFrozen, meta=(AllowPrivateAccess=true))
    bool IsFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanFlee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FleeInsteadOfBackingOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFleeing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStatsInstance;
    
public:
    AFSDPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
    UFUNCTION(BlueprintCallable)
    void StopFleeing();
    
    UFUNCTION(BlueprintCallable)
    void StartFleeing(const FVector& fromLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlerted(bool isAlerted);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Alerted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFrozen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedFleeing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedFleeing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFrozen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFrozen(AActor* Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnFirstHostileDamageTaken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyScaled(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorShattered(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnAlerted();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeRagdollMesh(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeElite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElite() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsAlerted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponentBase* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDAIController* GetFSDAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPawnAttitude GetAttitude() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze(AActor* Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExplodePawn();
    
    UFUNCTION(BlueprintCallable)
    void BackOffFromLocation(const FVector& fromLocation);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

