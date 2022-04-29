#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomKeyBindingLibrary.generated.h"

UCLASS(Blueprintable)
class UCustomKeyBindingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomKeyBindingLibrary();
};

