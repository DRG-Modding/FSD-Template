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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUINotificationItem> UINotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> UINotificationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSaveGame* SaveGame;
    
public:
    FSD_API FItemUINotifications();
};

