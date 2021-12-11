#pragma once
#include "CoreMinimal.h"
#include "ItemNotificationInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NotificationFlags;
    
    FSD_API FItemNotificationInfo();
};

