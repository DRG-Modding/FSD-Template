#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "AnyRetiredCampaignRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UAnyRetiredCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
    UAnyRetiredCampaignRequirement();
};

