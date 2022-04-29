#pragma once
#include "CoreMinimal.h"
#include "PlayerProximityDelegateDelegate.h"
#include "ProximityTriggerItem.generated.h"

USTRUCT(BlueprintType)
struct FProximityTriggerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerProximityDelegate Callback;
    
    FSD_API FProximityTriggerItem();
};

