#pragma once
#include "CoreMinimal.h"
#include "NotificationEntry.generated.h"

class UObject;
class UWindowWidget;

USTRUCT(BlueprintType)
struct FNotificationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ObjectInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWindowWidget> WindowClass;
    
    FSD_API FNotificationEntry();
};

