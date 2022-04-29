#pragma once
#include "CoreMinimal.h"
#include "CloudLoadEntry.h"
#include "CloudLoadAllResponse.generated.h"

USTRUCT(BlueprintType)
struct FCloudLoadAllResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCloudLoadEntry> savegames;
    
    FSD_API FCloudLoadAllResponse();
};

