#pragma once
#include "CoreMinimal.h"
#include "ItemAnimationItem.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FItemAnimationItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_CharacterMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_CharacterMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ItemMontage;
    
    FSD_API FItemAnimationItem();
};

