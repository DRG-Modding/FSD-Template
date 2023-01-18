#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TunnelSettingItem.h"
#include "TunnelSetting.generated.h"

class UFloodFillSettings;
class UTunnelSegmentSetting;

UCLASS(Blueprintable)
class UTunnelSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelSegmentSetting* BaseSegmentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelSegmentSetting* TightBendSegmentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelSegmentSetting* DirtSegmentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelSegmentSetting* DirtOffsetSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTunnelSettingItem> VariationSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UTunnelSetting();
};

