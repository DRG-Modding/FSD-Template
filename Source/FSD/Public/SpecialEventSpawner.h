#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpecialEventSpawner.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpecialEventSpawner : public UObject {
    GENERATED_BODY()
public:
    USpecialEventSpawner();
};

