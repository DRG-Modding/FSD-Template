#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveCampaignItem.generated.h"

USTRUCT(BlueprintType)
struct FActiveCampaignItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid CampaignID;
    
    UPROPERTY()
    int32 Progress;
    
    FSD_API FActiveCampaignItem();
};

