#pragma once
#include "CoreMinimal.h"
#include "NewPlayerMutator.generated.h"

class UMutator;

USTRUCT(BlueprintType)
struct FNewPlayerMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCampaignProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCampaignProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> Mutators;
    
    FSD_API FNewPlayerMutator();
};

