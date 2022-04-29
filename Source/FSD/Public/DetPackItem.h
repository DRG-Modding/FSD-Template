#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UpgradableGear.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "DetPackItem.generated.h"

class UAnimMontage;
class UCapacityHoldingItemAggregator;
class UForceFeedbackEffect;
class ADetPack;
class AItem;
class USkeletalMeshComponent;
class UDialogDataAsset;
class UItemUpgrade;

UCLASS(Blueprintable)
class ADetPackItem : public AAnimatedItem, public IUpgradable, public IUpgradableGear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADetPack> DetPackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> LoadoutProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPThrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPThrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_DetonateAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_DetonateAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipDetonatorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_EquipDetonatorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DetonatorFPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DetonatorTPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DetonatorTriggerForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* Capacity;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(EditAnywhere)
    float ThrowVelocity;
    
    UPROPERTY(EditAnywhere)
    float EnheiritOwnerVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float ThrowAngle;
    
    UPROPERTY(EditAnywhere)
    float CooldownAfterThrow;
    
    UPROPERTY(EditAnywhere)
    float CooldownAfterDetonation;
    
    UPROPERTY(EditAnywhere)
    float ThrowDelay;
    
    UPROPERTY(EditAnywhere)
    float ThrowZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutDetPackPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOutOfAmmo;
    
    UPROPERTY(EditAnywhere, Transient)
    float CooldownLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADetPack*> ThrownPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> DetPackUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDetonatorOut, meta=(AllowPrivateAccess=true))
    bool IsDetonatorOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasThrownPack;
    
public:
    ADetPackItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
    
    // Fix for true pure virtual functions not being implemented
};

