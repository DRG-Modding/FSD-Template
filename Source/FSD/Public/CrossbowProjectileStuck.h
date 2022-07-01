#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDPhysicsActor.h"
#include "EInputKeys.h"
#include "ECrossbowStuckType.h"
#include "CrossbowProjectileStuck.generated.h"

class USphereComponent;
class UStatusEffect;
class ACrossbowProjectileBase;
class UHealthComponentBase;
class APlayerCharacter;
class USceneComponent;

UCLASS(Blueprintable)
class ACrossbowProjectileStuck : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossbowStuckType StuckProjectileEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingElectricRangeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> AppliedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StatusEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* AttachmentRoot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* LaserCollider;
    
    UPROPERTY(EditAnywhere, Replicated)
    TWeakObjectPtr<ACrossbowProjectileBase> BaseProjectile;
    
public:
    ACrossbowProjectileStuck();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* Player, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void MatchParentDestroy(UHealthComponentBase* destroyed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecialArrowEquipped() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SetBansheePulseVisible(bool Enabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnCavePointRemoved(USceneComponent* Point);
    
};

