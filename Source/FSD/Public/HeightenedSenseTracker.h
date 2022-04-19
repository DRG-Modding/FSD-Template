#pragma once
#include "CoreMinimal.h"
#include "HeightenedSenseTracker.generated.h"

class UAttackingPointInterface;
class IAttackingPointInterface;
class AActor;
class UHealthComponentBase;

USTRUCT(BlueprintType)
struct FHeightenedSenseTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHealthComponentBase> HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAttackingPointInterface> AttackingPoint;
    
    FSD_API FHeightenedSenseTracker();
};

