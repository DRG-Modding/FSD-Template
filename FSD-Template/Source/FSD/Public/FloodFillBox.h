#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FloodFillBox.generated.h"

class UFloodFillSettings;

UCLASS(EditInlineNew)
class UFloodFillBox : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* Noise;
    
    UPROPERTY(VisibleAnywhere)
    FVector Position;
    
    UPROPERTY(VisibleAnywhere)
    FVector Extends;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Rotation;
    
    UPROPERTY(VisibleAnywhere)
    bool IsCarver;
    
    UPROPERTY(VisibleAnywhere)
    float NoiseRange;
    
public:
    UFloodFillBox();
};

