#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignRequirement.generated.h"

class AFSDPlayerController;
class UCampaign;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UCampaignRequirement : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequirementMet(AFSDPlayerController* Player, UCampaign* Campaign) const;
    
    UCampaignRequirement();
};

