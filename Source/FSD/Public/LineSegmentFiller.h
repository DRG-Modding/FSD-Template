#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentFiller.generated.h"

class ULineSegmentFillerComponent;

UCLASS(Blueprintable)
class ALineSegmentFiller : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULineSegmentFillerComponent* LineComponent;
    
    ALineSegmentFiller();
};

