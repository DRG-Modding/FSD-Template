#pragma once
#include "CoreMinimal.h"
#include "NewPlayerMutator.generated.h"

class UMutator;

USTRUCT(BlueprintType)
struct FNewPlayerMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinCampaignProgress;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCampaignProgress;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> Mutators;
    
    FSD_API FNewPlayerMutator();
};

