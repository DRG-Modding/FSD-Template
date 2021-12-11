#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "RandomSelectorItem.generated.h"

UCLASS()
class ARandomSelectorItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Min;
    
    UPROPERTY(EditAnywhere)
    int32 Max;
    
    ARandomSelectorItem();
};

