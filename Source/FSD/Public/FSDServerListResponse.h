#pragma once
#include "CoreMinimal.h"
#include "FSDServerListEntryModel.h"
#include "FSDServerListResponse.generated.h"

USTRUCT(BlueprintType)
struct FFSDServerListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDServerListEntryModel> Lobbies;
    
    FSD_API FFSDServerListResponse();
};

