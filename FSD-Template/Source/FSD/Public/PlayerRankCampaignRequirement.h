#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "PlayerRankCampaignRequirement.generated.h"

UCLASS(EditInlineNew)
class UPlayerRankCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RankRequirement;
    
public:
    UPlayerRankCampaignRequirement();
};

