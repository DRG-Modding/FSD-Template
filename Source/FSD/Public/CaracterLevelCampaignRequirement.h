#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "CaracterLevelCampaignRequirement.generated.h"

class UPlayerCharacterID;

UCLASS(EditInlineNew)
class UCaracterLevelCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LevelRequirement;
    
public:
    UCaracterLevelCampaignRequirement();
};

