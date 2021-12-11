#pragma once
#include "CoreMinimal.h"
#include "CarriedItemState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCarriedItemState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* Item;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 PlayThrowMontage: 1;
    
    FSD_API FCarriedItemState();
};

