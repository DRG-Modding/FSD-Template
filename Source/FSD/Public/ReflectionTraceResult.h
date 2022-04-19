#pragma once
#include "CoreMinimal.h"
#include "ReflectiveHitscanHit.h"
#include "ScanPath.h"
#include "ReflectionTraceResult.generated.h"

USTRUCT(BlueprintType)
struct FReflectionTraceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScanPath> Path;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FReflectiveHitscanHit FinalHit;
    
    FSD_API FReflectionTraceResult();
};

