#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "CaracterLevelCampaignRequirement.generated.h"

class UPlayerCharacterID;

UCLASS(EditInlineNew)
class FSD_API UCaracterLevelCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRequirement;
    
public:
    UCaracterLevelCampaignRequirement();
};

