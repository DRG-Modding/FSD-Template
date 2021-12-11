#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "ShoutStatusEffectItem.generated.h"

class UDialogDataAsset;

UCLASS(EditInlineNew)
class UShoutStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* BeginShout;
    
public:
    UShoutStatusEffectItem();
};

