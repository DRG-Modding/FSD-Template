#pragma once
#include "CoreMinimal.h"
#include "RetirementCostItem.h"
#include "Templates/SubclassOf.h"
#include "GDCharacterRetirement.generated.h"

class UCampaign;
class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FGDCharacterRetirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, TSubclassOf<UCampaign>> Campaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, FRetirementCostItem> RetirementCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CreditsCostMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ResourceCostMultipliers;
    
    FSD_API FGDCharacterRetirement();
};

