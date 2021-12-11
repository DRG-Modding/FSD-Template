#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrackPositionList.generated.h"

class UGemTracker;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FTrackPositionList {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TrackName;
    
    UPROPERTY()
    TArray<FVector> Positions;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials;
    
    FSD_API FTrackPositionList();
};

