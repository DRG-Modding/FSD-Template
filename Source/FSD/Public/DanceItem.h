#pragma once
#include "CoreMinimal.h"
#include "DanceItem.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDanceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DanceMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DanceMoveWithBeer;
    
    FSD_API FDanceItem();
};

