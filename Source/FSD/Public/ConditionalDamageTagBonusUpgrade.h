#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "ConditionalDamageTagBonusUpgrade.generated.h"

class UDamageCondition;
class UDamageTag;

UCLASS(EditInlineNew, MinimalAPI)
class UConditionalDamageTagBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
public:
    UConditionalDamageTagBonusUpgrade();
};

