#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "ConditionalDamageTagBonusUpgrade.generated.h"

class UDamageTag;
class UDamageCondition;

UCLASS(EditInlineNew, MinimalAPI)
class UConditionalDamageTagBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UDamageTag*> Tags;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageCondition* Condition;
    
public:
    UConditionalDamageTagBonusUpgrade();
};

