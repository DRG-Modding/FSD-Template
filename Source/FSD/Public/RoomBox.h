#pragma once
#include "CoreMinimal.h"
#include "Rotator_NoQuantize.h"
#include "UObject/NoExportTypes.h"
#include "RoomBox.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FRoomBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRotator_NoQuantize Rotation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extends;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseRange;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* Noise;
    
    FSD_API FRoomBox();
};

