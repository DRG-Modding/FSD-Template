#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Item.h"
#include "RejoinListener.h"
#include "UObject/NoExportTypes.h"
#include "EThrownGrenadeItemState.h"
#include "UObject/NoExportTypes.h"
#include "ThrownGrenadeItem.generated.h"

class UHealthComponentBase;
class UPlayerAnimInstance;
class UGrenadeAnimationSet;
class UItemCharacterAnimationSet;
class AGrenade;
class UStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FThrownGrenadeItemOnGrenadeThrown);

UCLASS()
class AThrownGrenadeItem : public AItem, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FThrownGrenadeItemOnGrenadeThrown OnGrenadeThrown;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ThrowOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowAngle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 MaxGrenades;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_GrenadeCount)
    int32 Grenades;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GrenadeCooldownRemaining;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_State)
    EThrownGrenadeItemState State;
    
    UPROPERTY(Replicated, Transient)
    TSubclassOf<AGrenade> GrenadeClass;
    
    UPROPERTY(EditAnywhere)
    UGrenadeAnimationSet* DefaultGrenadeAnimationSet;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* GrenadeMeshInstance;
    
    UPROPERTY(Replicated, Transient)
    bool HasRejoinedInitialized;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThrowGrenade();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetState(EThrownGrenadeItemState itemState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Resupply(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void ResupplyGrenades(float percentage);
    
protected:
    UFUNCTION()
    void OnRep_State();
    
    UFUNCTION()
    void OnRep_GrenadeCount();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* Health);
    
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
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AThrownGrenadeItem();
    
    // Fix for true pure virtual functions not being implemented
};

