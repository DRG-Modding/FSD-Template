#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "DebrisActorComponent.h"
#include "DebrisProbabilityComponent.generated.h"

UCLASS()
class UDebrisProbabilityComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange ProbabilityRange;
    
    UPROPERTY(EditAnywhere)
    bool IsProbabilityShared;
    
public:
    UDebrisProbabilityComponent();
};

