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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> Positions;
    
    UPROPERTY(Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials;
    
    FSD_API FTrackPositionList();
};

