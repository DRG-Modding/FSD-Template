#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TunnelPath.generated.h"

USTRUCT(BlueprintType)
struct FTunnelPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FVector> Path;
    
    FSD_API FTunnelPath();
};

