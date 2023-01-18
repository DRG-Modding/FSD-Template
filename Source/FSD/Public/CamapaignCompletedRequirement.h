#pragma once
#include "CoreMinimal.h"
#include "CampaignRequirement.h"
#include "Templates/SubclassOf.h"
#include "CamapaignCompletedRequirement.generated.h"

class UCampaign;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UCamapaignCompletedRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> Campaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InverseRequirement;
    
public:
    UCamapaignCompletedRequirement();
};

