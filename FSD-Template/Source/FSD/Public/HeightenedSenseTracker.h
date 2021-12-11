#pragma once
#include "CoreMinimal.h"
#include "HeightenedSenseTracker.generated.h"

class AActor;
class UHealthComponentBase;
class UAttackingPointInterface;
class IAttackingPointInterface;

USTRUCT(BlueprintType)
struct FHeightenedSenseTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UHealthComponentBase> HealthComponent;
    
    UPROPERTY()
    TScriptInterface<IAttackingPointInterface> AttackingPoint;
    
    FSD_API FHeightenedSenseTracker();
};

