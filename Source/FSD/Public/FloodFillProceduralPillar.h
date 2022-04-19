#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "FloodFillProceduralPillar.generated.h"

class UPillarSettings;

UCLASS(EditInlineNew)
class UFloodFillProceduralPillar : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPillarSettings* PillarSettings;
    
public:
    UFloodFillProceduralPillar();
};

