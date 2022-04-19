#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentFiller.generated.h"

class ULineSegmentFillerComponent;

UCLASS()
class ALineSegmentFiller : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULineSegmentFillerComponent* LineComponent;
    
    ALineSegmentFiller();
};

