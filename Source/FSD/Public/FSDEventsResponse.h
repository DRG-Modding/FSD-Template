#pragma once
#include "CoreMinimal.h"
#include "BackendNotification.h"
#include "FSDEventsResponse.generated.h"

USTRUCT(BlueprintType)
struct FFSDEventsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackendNotification> Notifications;
    
    FSD_API FFSDEventsResponse();
};

