#pragma once
#include "CoreMinimal.h"
#include "IKStyle.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FIKStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepAirTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RandomWalkCycles[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NeutralAnimation;
    
    FSD_API FIKStyle();
};

