#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagAssetInterface.h"
#include "Targetable.h"
#include "GameplayTagContainer.h"
#include "ProjectileSpawner.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "EPawnAttitude.h"
#include "FSDPawn.generated.h"

class UEnemyTemperatureComponent;
class UStatusEffectsComponent;
class UEnemyDescriptor;
class UPawnStatsComponent;
class AActor;
class USkeletalMeshComponent;
class UHealthComponentBase;
class AFSDAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPawnOnFrozenEvent, bool, boolValue);

UCLASS(Abstract)
class AFSDPawn : public APawn, public IGameplayTagAssetInterface, public ITargetable, public IProjectileSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDPawnOnFrozenEvent OnFrozenEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStatusEffectsComponent* StatusEffects;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyTemperatureComponent* Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly)
    UEnemyDescriptor* SpawnedFromDescriptor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsFrozen)
    bool IsFrozen;
    
    UPROPERTY(EditAnywhere)
    bool CanFlee;
    
    UPROPERTY(EditAnywhere)
    bool FleeInsteadOfBackingOff;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsFleeing;
    
    UPROPERTY(Export, Transient)
    UPawnStatsComponent* PawnStatsInstance;
    
public:
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
    void OnEnemyScaled(float newScale);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorShattered(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnAlerted();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeRagdollMesh(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeElite();
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDPawn();
    
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

