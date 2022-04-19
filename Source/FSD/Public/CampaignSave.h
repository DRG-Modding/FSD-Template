#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveCampaignItem.h"
#include "WeeklyCampaignItem.h"
#include "CampaignSave.generated.h"

USTRUCT(BlueprintType)
struct FCampaignSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FActiveCampaignItem ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CompletedCampaigns;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ActiveCampaignWeek;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWeeklyCampaignItem WeeklySave;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWeeklyCampaignItem MaxtrixCoreHuntSave;
    
public:
    FSD_API FCampaignSave();
};

