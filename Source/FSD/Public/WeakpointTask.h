#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "WeakpointTask.generated.h"

USTRUCT(BlueprintType)
struct FWeakpointTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FRichCurve GrowCurve;
    
    UPROPERTY(EditAnywhere, Transient)
    FRichCurve FadeCurve;
    
    FSD_API FWeakpointTask();
};

