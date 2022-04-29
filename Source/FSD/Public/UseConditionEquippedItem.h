#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionEquippedItem.generated.h"

class AItem;

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionEquippedItem : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AItem>> Items;
    
    UUseConditionEquippedItem();
};

