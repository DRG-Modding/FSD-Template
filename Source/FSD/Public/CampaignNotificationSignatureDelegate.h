#pragma once
#include "CoreMinimal.h"
#include "CampaignNotificationSignatureDelegate.generated.h"

class UCampaignNotification;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCampaignNotificationSignature, UCampaignNotification*, Notification);

