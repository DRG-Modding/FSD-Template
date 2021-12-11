#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "SpiderAnimInstanceProxy.generated.h"

USTRUCT()
struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSD_API FSpiderAnimInstanceProxy();
};

