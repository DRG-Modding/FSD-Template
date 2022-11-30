#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMinersManualSection.h"
#include "MinersManualNotificationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMinersManualNotification, EMinersManualSection, Section, FGuid, ObjectID, FText, Text);

