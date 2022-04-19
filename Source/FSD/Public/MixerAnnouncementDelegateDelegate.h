#pragma once
#include "CoreMinimal.h"
#include "MixerAnnouncement.h"
#include "MixerAnnouncementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMixerAnnouncementDelegate, const FMixerAnnouncement&, Announcement);

