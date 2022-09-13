#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "HydraWeedCore.generated.h"

class AHydraWeedShooter;
class AHydraWeedHealer;

UCLASS(Blueprintable)
class AHydraWeedCore : public AEnemyPawn {
    GENERATED_BODY()
public:
    AHydraWeedCore();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WakupCore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShooterKilled(AHydraWeedShooter* shooter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealerKilled(AHydraWeedHealer* healer);
    
};

