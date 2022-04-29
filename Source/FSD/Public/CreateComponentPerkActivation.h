#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "CreateComponentPerkActivation.generated.h"

class UFloatPerkComponent;

UCLASS(Blueprintable, EditInlineNew)
class UCreateComponentPerkActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFloatPerkComponent> ComponentClass;
    
public:
    UCreateComponentPerkActivation();
};

