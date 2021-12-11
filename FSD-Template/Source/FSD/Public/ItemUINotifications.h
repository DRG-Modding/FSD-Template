#pragma once
#include "CoreMinimal.h"
#include "UINotificationItem.h"
#include "UObject/NoExportTypes.h"
#include "ItemUINotifications.generated.h"

class UFSDSaveGame;

USTRUCT(BlueprintType)
struct FItemUINotifications {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FUINotificationItem> UINotifications;
    
    UPROPERTY(Transient)
    TSet<FGuid> UINotificationSet;
    
    UPROPERTY(Transient)
    UFSDSaveGame* SaveGame;
    
public:
    FSD_API FItemUINotifications();
};

