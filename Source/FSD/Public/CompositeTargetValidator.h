#pragma once
#include "CoreMinimal.h"
#include "TargetValidator.h"
#include "CompositeTargetValidator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCompositeTargetValidator : public UTargetValidator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTargetValidator*> TargetValidators;
    
public:
    UCompositeTargetValidator();
};

