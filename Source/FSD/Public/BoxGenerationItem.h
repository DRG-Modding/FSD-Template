#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "BoxGenerationItem.generated.h"

class UBoxGenerationComponent;

UCLASS()
class ABoxGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UBoxGenerationComponent* BoxComponent;
    
    ABoxGenerationItem();
};

