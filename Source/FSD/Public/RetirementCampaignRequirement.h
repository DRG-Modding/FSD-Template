#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "RetirementCampaignRequirement.generated.h"

class UPlayerCharacterID;

UCLASS(EditInlineNew)
class URetirementCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LevelRequirement;
    
public:
    URetirementCampaignRequirement();
};

