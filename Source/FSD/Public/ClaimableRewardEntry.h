#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.generated.h"

class UClaimableRewardEntryWidget;
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
    TSoftObjectPtr<UObject> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UClaimableRewardEntryWidget> EntryWidgetOverride;
    
    FSD_API FClaimableRewardEntry();
};

