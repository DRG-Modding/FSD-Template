#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "UObject/NoExportTypes.h"
#include "WeeklyTimerCampaignRequirement.generated.h"

class AFSDPlayerController;
class UCampaign;

UCLASS(EditInlineNew)
class UWeeklyTimerCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetWeeklyTimeLeft(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTimeUntillNewCampaign(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasCompleted(UCampaign* Campaign, AFSDPlayerController* Player) const;
    
    UWeeklyTimerCampaignRequirement();
};

