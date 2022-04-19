#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionIsCarrying.generated.h"

UCLASS(EditInlineNew)
class UUseConditionIsCarrying : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionIsCarrying();
};

