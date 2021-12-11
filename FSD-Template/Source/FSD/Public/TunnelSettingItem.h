#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TunnelSettingItem.generated.h"

class UTunnelSegmentSetting;

USTRUCT(BlueprintType)
struct FTunnelSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTunnelSegmentSetting* SegmentSetting;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval SegmentSize;
    
    FSD_API FTunnelSettingItem();
};

