#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlacementObstruction.generated.h"

USTRUCT(BlueprintType)
struct FPlacementObstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FSD_API FPlacementObstruction();
};

