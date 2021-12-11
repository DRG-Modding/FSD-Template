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
    UPROPERTY(Transient)
    float KillsResetAccuracyDuration;
    
    UPROPERTY(Transient)
    bool KillsTriggersStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> KillTriggeredStatusEffect;
    
    UFUNCTION(BlueprintCallable)
    void OnTimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetAccuracy();
    
public:
    AAssaultRifle();
};

