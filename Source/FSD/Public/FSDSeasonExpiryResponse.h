#pragma once
#include "CoreMinimal.h"
#include "FSDSeasonExpiryResponse.generated.h"

USTRUCT(BlueprintType)
struct FFSDSeasonExpiryResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeSteam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeSony;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeGDK;
    
    FSD_API FFSDSeasonExpiryResponse();
};

