#pragma once
#include "CoreMinimal.h"
#include "CoilgunCoil.generated.h"

USTRUCT(BlueprintType)
struct FCoilgunCoil {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Angle;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    FSD_API FCoilgunCoil();
};

