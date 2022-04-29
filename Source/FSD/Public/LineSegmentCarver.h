#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "LineSegmentCarver.generated.h"

class ULineSegmentCarverComponent;

UCLASS(Blueprintable)
class ALineSegmentCarver : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULineSegmentCarverComponent* LineComponent;
    
    ALineSegmentCarver();
};

