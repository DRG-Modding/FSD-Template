#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EThrownGrenadeItemState.h"
#include "Item.h"
#include "RejoinListener.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ThrownGrenadeItem.generated.h"

class UPlayerAnimInstance;
class UGrenadeAnimationSet;
class UItemCharacterAnimationSet;
class AGrenade;
class UStaticMeshComponent;

UCLASS()
class AThrownGrenadeItem : public AItem, public IRejoinListener {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGrenadeThrown);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnGrenadeThrown OnGrenadeThrown;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThrowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAngle;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxGrenades;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_GrenadeCount, meta=(AllowPrivateAccess=true))
    int32 Grenades;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float GrenadeCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EThrownGrenadeItemState State;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_GrenadeClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGrenade> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrenadeAnimationSet* DefaultGrenadeAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GrenadeMeshInstance;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasRejoinedInitialized;
    
public:
    AThrownGrenadeItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThrowGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetState(EThrownGrenadeItemState itemState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Resupply(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void ResupplyGrenades(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrenadeCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrenadeClass();
    
    UFUNCTION(BlueprintCallable)
    void GrenadeThrowFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrenadeThrowVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetGrenadeThrowRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrenadeGravity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrenadeDuration() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

