#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CampaignRequirement.h"
#include "CamapaignCompletedRequirement.generated.h"

class UCampaign;

UCLASS(EditInlineNew)
class UCamapaignCompletedRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCampaign> Campaign;
    
public:
    UCamapaignCompletedRequirement();
};

