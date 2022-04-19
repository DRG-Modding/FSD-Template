#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
#include "ClaimableRewardArray.generated.h"

USTRUCT(BlueprintType)
struct FClaimableRewardArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> Entries;
    
    FSD_API FClaimableRewardArray();
};

