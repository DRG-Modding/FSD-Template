#pragma once
#include "CoreMinimal.h"
#include "FormationData.h"
#include "FlyingFormationData.generated.h"

UCLASS()
class UFlyingFormationData : public UFormationData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 FormationSize;
    
    UPROPERTY(EditAnywhere)
    float FormationSpread;
    
    UPROPERTY(EditAnywhere)
    float RandomSpread;
    
public:
    UFlyingFormationData();
};

