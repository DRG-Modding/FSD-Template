#pragma once
#include "CoreMinimal.h"
#include "DanceItem.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDanceItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* DanceMove;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DanceMoveWithBeer;
    
    FSD_API FDanceItem();
};

