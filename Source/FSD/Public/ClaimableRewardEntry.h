#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClaimableRewardEntry.generated.h"

class UObject;
class UReward;

USTRUCT(BlueprintType)
struct FClaimableRewardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    FSD_API FClaimableRewardEntry();
};

