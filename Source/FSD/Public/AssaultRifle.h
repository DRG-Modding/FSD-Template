#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "AssaultRifle.generated.h"

class UFSDPhysicalMaterial;
class UStatusEffect;
class AActor;

UCLASS(Blueprintable)
class AAssaultRifle : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float KillsResetAccuracyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool KillsTriggersStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> KillTriggeredStatusEffect;
    
public:
    AAssaultRifle();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetAccuracy();
    
};

