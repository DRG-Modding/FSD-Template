#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BeamCollision.generated.h"

USTRUCT(BlueprintType)
struct FBeamCollision {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bBeamBlocked;
    
    UPROPERTY(EditAnywhere)
    float BeamHitDistance;
    
    UPROPERTY()
    FVector FinalTraceStart;
    
    UPROPERTY()
    FVector FinalTraceEnd;
    
    FSD_API FBeamCollision();
};

