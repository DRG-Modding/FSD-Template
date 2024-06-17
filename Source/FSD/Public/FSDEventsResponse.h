#pragma once
#include "CoreMinimal.h"
#include "BackendNotification.h"
#include "FSDEventWithEnd.h"
#include "FSDEventsResponse.generated.h"

USTRUCT(BlueprintType)
struct FFSDEventsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackendNotification> Notifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDEventWithEnd> ActiveEventsWithEnd;
    
    FSD_API FFSDEventsResponse();
};

