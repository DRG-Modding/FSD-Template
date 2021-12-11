#pragma once
#include "CoreMinimal.h"
#include "WeeklyCampaignItem.h"
#include "ActiveCampaignItem.h"
#include "UObject/NoExportTypes.h"
#include "CampaignSave.generated.h"

USTRUCT(BlueprintType)
struct FCampaignSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    FActiveCampaignItem ActiveCampaign;
    
    UPROPERTY()
    TArray<FGuid> CompletedCampaigns;
    
    UPROPERTY()
    int32 ActiveCampaignWeek;
    
protected:
    UPROPERTY()
    FWeeklyCampaignItem WeeklySave;
    
    UPROPERTY()
    FWeeklyCampaignItem MaxtrixCoreHuntSave;
    
public:
    FSD_API FCampaignSave();
};

