#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDPhysicsActor.h"
#include "EInputKeys.h"
#include "ECrossbowStuckType.h"
#include "CrossbowProjectileStuck.generated.h"

class UHealthComponentBase;
class ACrossbowProjectileBase;
class UStatusEffect;
class APlayerCharacter;
class USphereComponent;
class USceneComponent;

UCLASS()
class ACrossbowProjectileStuck : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    ECrossbowStuckType StuckProjectileEffect;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsPlayingElectricRangeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> AppliedEffect;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StatusEffectTime;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* AttachmentRoot;
    
private:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
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

