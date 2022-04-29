#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PickaxePartItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPickaxePartItem : public UObject {
    GENERATED_BODY()
public:
    UPickaxePartItem();
};

