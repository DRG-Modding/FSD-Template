#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "WeakpointTask.generated.h"

USTRUCT()
struct FWeakpointTask {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FRichCurve GrowCurve;
    
    UPROPERTY(Transient)
    FRichCurve FadeCurve;
    
    FSD_API FWeakpointTask();
};

