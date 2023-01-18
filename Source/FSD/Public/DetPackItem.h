#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "Templates/SubclassOf.h"
#include "Upgradable.h"
#include "UpgradableGear.h"
#include "DetPackItem.generated.h"

class ADetPack;
class AItem;
class UAnimMontage;
class UCapacityHoldingItemAggregator;
class UDialogDataAsset;
class UForceFeedbackEffect;
class UItemUpgrade;
class USkeletalMeshComponent;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DetonatorFPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DetonatorTPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DetonatorTriggerForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* Capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnheiritOwnerVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownAfterThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownAfterDetonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutDetPackPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOutOfAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Detonate();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
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

