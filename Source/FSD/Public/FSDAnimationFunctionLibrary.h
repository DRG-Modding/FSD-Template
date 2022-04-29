#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDAnimationFunctionLibrary.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class UFSDAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDAnimationFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static float GetAnimSequenceLength(const UAnimSequence* AnimSequence);
    
};

