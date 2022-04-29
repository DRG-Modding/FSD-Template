#pragma once
#include "CoreMinimal.h"
#include "CSGSphereProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGSphereProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float AngleTop;
    
    UPROPERTY(EditAnywhere)
    float AngleBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SidesTopBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sides;
    
    FSDENGINE_API FCSGSphereProperties();
};

