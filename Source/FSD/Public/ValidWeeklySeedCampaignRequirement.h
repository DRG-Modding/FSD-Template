#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "ValidWeeklySeedCampaignRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UValidWeeklySeedCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
    UValidWeeklySeedCampaignRequirement();
};

