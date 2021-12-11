#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rotator_NoQuantize.h"
#include "RoomBox.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FRoomBox {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector Position;
    
    UPROPERTY(VisibleAnywhere)
    FRotator_NoQuantize Rotation;
    
    UPROPERTY(VisibleAnywhere)
    FVector Extends;
    
    UPROPERTY(VisibleAnywhere)
    float NoiseRange;
    
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* Noise;
    
    FSD_API FRoomBox();
};

