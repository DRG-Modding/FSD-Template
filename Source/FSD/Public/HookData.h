#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "HookData.generated.h"

USTRUCT(BlueprintType)
struct FHookData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExtending;
    
    FSD_API FHookData();
};

