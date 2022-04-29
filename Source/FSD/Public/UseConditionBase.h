#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UseConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UUseConditionBase : public UObject {
    GENERATED_BODY()
public:
    UUseConditionBase();
};

