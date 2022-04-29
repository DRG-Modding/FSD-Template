#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionIsOwner.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionIsOwner : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionIsOwner();
};

