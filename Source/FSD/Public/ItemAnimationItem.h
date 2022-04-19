#pragma once
#include "CoreMinimal.h"
#include "ItemAnimationItem.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FItemAnimationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_CharacterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_CharacterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ItemMontage;
    
    FSD_API FItemAnimationItem();
};

