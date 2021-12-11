#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TunnelParameters.generated.h"

class UFloodFillSettings;

UCLASS(BlueprintType)
class UTunnelParameters : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(EditAnywhere)
    float PathZPenalty;
    
    UPROPERTY(EditAnywhere)
    float PathDirectionPenalty;
    
    UPROPERTY(EditAnywhere)
    float PathEntranceAnglePenalty;
    
    UPROPERTY(EditAnywhere)
    float ObstacleCostScale;
    
    UPROPERTY(EditAnywhere)
    bool AllowBlockedEntrances;
    
    UPROPERTY(EditAnywhere)
    bool PickBestMatchingEntrance;
    
    UTunnelParameters();
};

