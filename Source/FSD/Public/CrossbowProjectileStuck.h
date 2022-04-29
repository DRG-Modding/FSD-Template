#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECrossbowStuckType.h"
#include "FSDPhysicsActor.h"
#include "EInputKeys.h"
#include "CrossbowProjectileStuck.generated.h"

class ACrossbowProjectileBase;
class UStatusEffect;
class USphereComponent;
class APlayerCharacter;
class UHealthComponentBase;
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
    
    UPROPERTY(EditAnywhere, Replicated)
    float StatusEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* AttachmentRoot;
    
private:
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

