#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "RetirementCampaignRequirement.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API URetirementCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRequirement;
    
public:
    URetirementCampaignRequirement();
};

