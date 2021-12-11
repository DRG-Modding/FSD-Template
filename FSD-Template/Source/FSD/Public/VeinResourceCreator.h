#pragma once
#include "CoreMinimal.h"
#include "ResourceCreator.h"
#include "ECarveFilterType.h"
#include "RandRange.h"
#include "VeinResourceCreator.generated.h"

class UDebrisBase;
class UVeinResourceData;
class UFloodFillSettings;
class UDebrisPositioning;

UCLASS(EditInlineNew)
class UVeinResourceCreator : public UResourceCreator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVeinResourceData* Resource;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType CarveType;
    
    UPROPERTY(EditAnywhere)
    float SegmentMaxDot;
    
    UPROPERTY(EditAnywhere)
    float VeinWorldHorizontalMaxDot;
    
    UPROPERTY(EditAnywhere)
    float VeinWorldHorizontalMinDot;
    
    UPROPERTY(EditAnywhere)
    FRandRange VeinLength;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* Noise;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
public:
    UVeinResourceCreator();
};

