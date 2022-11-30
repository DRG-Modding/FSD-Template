#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrackPositionList.generated.h"

class UMaterialInstanceDynamic;
class UGemTracker;

USTRUCT(BlueprintType)
struct FTrackPositionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4> Positions;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials;
    
    FSD_API FTrackPositionList();
};

