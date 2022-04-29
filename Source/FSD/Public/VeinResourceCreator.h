#pragma once
#include "CoreMinimal.h"
#include "ResourceCreator.h"
#include "RandRange.h"
#include "ECarveFilterType.h"
#include "VeinResourceCreator.generated.h"

class UVeinResourceData;
class UDebrisPositioning;
class UFloodFillSettings;
class UDebrisBase;

UCLASS(Blueprintable, EditInlineNew)
class UVeinResourceCreator : public UResourceCreator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVeinResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveType;
    
    UPROPERTY(EditAnywhere)
    float SegmentMaxDot;
    
    UPROPERTY(EditAnywhere)
    float VeinWorldHorizontalMaxDot;
    
    UPROPERTY(EditAnywhere)
    float VeinWorldHorizontalMinDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange VeinLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* Noise;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
public:
    UVeinResourceCreator();
};

