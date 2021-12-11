#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "UpgradableGear.h"
#include "DetPackItem.generated.h"

class UForceFeedbackEffect;
class UAnimMontage;
class AItem;
class ADetPack;
class USkeletalMeshComponent;
class UCapacityHoldingItemAggregator;
class UDialogDataAsset;
class UItemUpgrade;

UCLASS()
class ADetPackItem : public AAnimatedItem, public IUpgradable, public IUpgradableGear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ADetPack> DetPackClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AItem> LoadoutProxy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPThrowMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPThrowMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_DetonateAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_DetonateAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipDetonatorAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_EquipDetonatorAnimation;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* DetonatorFPMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* DetonatorTPMesh;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* DetonatorTriggerForceFeedback;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* Capacity;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnheiritOwnerVelocityScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CooldownAfterThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CooldownAfterDetonation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutDetPackPlaced;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutOutOfAmmo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CooldownLeft;
    
    UPROPERTY(Transient)
    TArray<ADetPack*> ThrownPacks;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> DetPackUpgrades;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsDetonatorOut)
    bool IsDetonatorOut;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool HasThrownPack;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Simulate_ThrowGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThrowGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Detonate();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CycleItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnRep_IsDetonatorOut();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDetonatorOut();
    
    UFUNCTION(BlueprintCallable)
    void OnDetonatingFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGrenades() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADetPackItem();
    
    // Fix for true pure virtual functions not being implemented
};

