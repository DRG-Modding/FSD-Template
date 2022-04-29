#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "MultiDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMultiDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UDamageCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireAllTrue;
    
public:
    UMultiDamageCondition();
};

