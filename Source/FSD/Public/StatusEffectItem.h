#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StatusEffectItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatusEffectItem : public UObject {
    GENERATED_BODY()
public:
    UStatusEffectItem();
};

