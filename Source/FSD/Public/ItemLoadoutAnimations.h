#pragma once
#include "CoreMinimal.h"
#include "ItemLoadoutAnimations.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FItemLoadoutAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Loadout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequence*> Loadout_IdleBreaks;
    
    FSD_API FItemLoadoutAnimations();
};

