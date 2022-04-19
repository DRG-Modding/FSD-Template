#pragma once
#include "CoreMinimal.h"
#include "CoilgunCoil.generated.h"

USTRUCT(BlueprintType)
struct FCoilgunCoil {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    FSD_API FCoilgunCoil();
};

