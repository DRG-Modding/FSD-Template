#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentCarver.generated.h"

class ULineSegmentCarverComponent;

UCLASS()
class ALineSegmentCarver : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    ULineSegmentCarverComponent* LineComponent;
    
    ALineSegmentCarver();
};

