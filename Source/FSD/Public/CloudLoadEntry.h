#pragma once
#include "CoreMinimal.h"
#include "CloudLoadEntry.generated.h"

USTRUCT(BlueprintType)
struct FCloudLoadEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString RawData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TimeUTC;
    
    FSD_API FCloudLoadEntry();
};

