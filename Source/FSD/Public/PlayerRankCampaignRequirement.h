#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "PlayerRankCampaignRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UPlayerRankCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankRequirement;
    
public:
    UPlayerRankCampaignRequirement();
};

