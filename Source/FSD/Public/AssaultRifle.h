#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "AssaultRifle.generated.h"

class UStatusEffect;
class AActor;
class UFSDPhysicalMaterial;

UCLASS()
class AAssaultRifle : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float KillsResetAccuracyDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
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

