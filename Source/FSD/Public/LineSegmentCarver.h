#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentCarver.generated.h"

class ULineSegmentCarverComponent;

UCLASS()
class ALineSegmentCarver : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULineSegmentCarverComponent* LineComponent;
    
    ALineSegmentCarver();
};

