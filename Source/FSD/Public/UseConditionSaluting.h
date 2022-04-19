#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionSaluting.generated.h"

UCLASS(EditInlineNew)
class UUseConditionSaluting : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionSaluting();
};

