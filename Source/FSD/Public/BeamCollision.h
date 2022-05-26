#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BeamCollision.generated.h"

USTRUCT(BlueprintType)
struct FBeamCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeamBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeamHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FinalTraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FinalTraceEnd;
    
    FSD_API FBeamCollision();
};

