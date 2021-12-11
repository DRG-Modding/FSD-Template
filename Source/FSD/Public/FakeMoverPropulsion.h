#pragma once
#include "CoreMinimal.h"
#include "FakeMoverPropulsion.generated.h"

USTRUCT(BlueprintType)
struct FFakeMoverPropulsion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float AirAcceleration;
    
    UPROPERTY(EditAnywhere)
    float AirDeceleration;
    
    UPROPERTY(EditAnywhere)
    float GroundAcceleration;
    
    UPROPERTY(EditAnywhere)
    float GroundDeceleration;
    
    FSD_API FFakeMoverPropulsion();
};

