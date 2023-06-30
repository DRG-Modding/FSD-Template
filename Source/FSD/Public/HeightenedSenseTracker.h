#pragma once
#include "CoreMinimal.h"
#include "HeightenedSenseTracker.generated.h"

class AActor;
class IAttackingPointInterface;
class UAttackingPointInterface;
class UHealthComponentBase;

USTRUCT(BlueprintType)
struct FHeightenedSenseTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHealthComponentBase> HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAttackingPointInterface> AttackingPoint;
    
    FSD_API FHeightenedSenseTracker();
};

