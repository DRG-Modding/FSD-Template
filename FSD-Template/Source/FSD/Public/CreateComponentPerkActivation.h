#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "CreateComponentPerkActivation.generated.h"

class UFloatPerkComponent;

UCLASS(EditInlineNew)
class UCreateComponentPerkActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UFloatPerkComponent> ComponentClass;
    
public:
    UCreateComponentPerkActivation();
};

