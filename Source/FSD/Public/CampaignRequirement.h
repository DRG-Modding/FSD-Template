#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignRequirement.generated.h"

class AFSDPlayerController;
class UCampaign;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API UCampaignRequirement : public UObject {
    GENERATED_BODY()
public:
    UCampaignRequirement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequirementMet(AFSDPlayerController* Player, UCampaign* Campaign) const;
    
};

