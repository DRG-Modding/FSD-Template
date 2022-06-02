#pragma once
#include "CoreMinimal.h"
#include "ScanPath.h"
#include "ReflectiveHitscanHit.h"
#include "ReflectionTraceResult.generated.h"

USTRUCT(BlueprintType)
struct FReflectionTraceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScanPath> Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FReflectiveHitscanHit FinalHit;
    
    FSD_API FReflectionTraceResult();
};

