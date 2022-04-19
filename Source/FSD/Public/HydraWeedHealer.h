#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "HydraWeedHealer.generated.h"

class AHydraWeedCore;

UCLASS()
class AHydraWeedHealer : public AEnemyPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AHydraWeedCore* Core;
    
public:
    AHydraWeedHealer();
};

