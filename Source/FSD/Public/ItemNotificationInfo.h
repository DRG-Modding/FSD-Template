#pragma once
#include "CoreMinimal.h"
#include "ItemNotificationInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotificationFlags;
    
    FSD_API FItemNotificationInfo();
};

