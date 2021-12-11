#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "SeasonEventData.generated.h"

class UTexture2D;

UCLASS()
class FSD_API USeasonEventData : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerformancePoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerformancePointsOnFail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    USeasonEventData();
};

