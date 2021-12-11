#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignNotification.generated.h"

class UCampaign;
class UCampaignMission;

UCLASS(BlueprintType)
class UCampaignNotification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UCampaign* Campaign;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCampaignMission* mission;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Progress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCampaignCompleted;
    
    UCampaignNotification();
};

