#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "MultiDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UMultiDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TArray<UDamageCondition*> Conditions;
    
    UPROPERTY(EditAnywhere)
    bool RequireAllTrue;
    
public:
    UMultiDamageCondition();
};

