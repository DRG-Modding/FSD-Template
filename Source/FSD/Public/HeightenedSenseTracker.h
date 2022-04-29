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
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UHealthComponentBase> HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAttackingPointInterface> AttackingPoint;
    
    FSD_API FHeightenedSenseTracker();
};

