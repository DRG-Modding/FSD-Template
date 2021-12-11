#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "DamageTagBonusUpgrade.generated.h"

class UDamageTag;

UCLASS(EditInlineNew, MinimalAPI)
class UDamageTagBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UDamageTag*> Tags;
    
public:
    UDamageTagBonusUpgrade();
};

