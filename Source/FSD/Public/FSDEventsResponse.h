#pragma once
#include "CoreMinimal.h"
#include "BackendNotification.h"
#include "FSDEventsResponse.generated.h"

USTRUCT()
struct FFSDEventsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveEvents;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeSteam;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeSony;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeGDK;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<FBackendNotification> Notifications;
    
    FSD_API FFSDEventsResponse();
};

