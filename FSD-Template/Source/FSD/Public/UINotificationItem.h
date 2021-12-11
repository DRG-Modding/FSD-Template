#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UINotificationItem.generated.h"

USTRUCT(BlueprintType)
struct FUINotificationItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> NotificationIDs;
    
    FSD_API FUINotificationItem();
};

