#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionGrounded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionGrounded : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionGrounded();
};

