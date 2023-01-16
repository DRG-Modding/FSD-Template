#pragma once
#include "CoreMinimal.h"
#include "ItemLoadoutAnimations.generated.h"

class UAnimSequence;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FItemLoadoutAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> Loadout_IdleBreaks;
    
    FSD_API FItemLoadoutAnimations();
};

