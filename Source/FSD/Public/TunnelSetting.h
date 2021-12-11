#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TunnelSettingItem.h"
#include "TunnelSetting.generated.h"

class UTunnelSegmentSetting;
class UFloodFillSettings;

UCLASS(BlueprintType)
class UTunnelSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTunnelSegmentSetting* BaseSegmentSetting;
    
    UPROPERTY(EditAnywhere)
    UTunnelSegmentSetting* TightBendSegmentSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTunnelSegmentSetting* DirtSegmentSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTunnelSegmentSetting* DirtOffsetSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTunnelSettingItem> VariationSegments;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UTunnelSetting();
};

