#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentFiller.generated.h"

class ULineSegmentFillerComponent;

UCLASS()
class ALineSegmentFiller : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    ULineSegmentFillerComponent* LineComponent;
    
    ALineSegmentFiller();
};

