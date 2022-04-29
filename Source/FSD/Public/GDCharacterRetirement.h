#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RetirementCostItem.h"
#include "GDCharacterRetirement.generated.h"

class UPlayerCharacterID;
class UCampaign;

USTRUCT(BlueprintType)
struct FGDCharacterRetirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, TSubclassOf<UCampaign>> Campaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, FRetirementCostItem> RetirementCost;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CreditsCostMultipliers;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ResourceCostMultipliers;
    
    FSD_API FGDCharacterRetirement();
};

