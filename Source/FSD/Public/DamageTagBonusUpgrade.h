#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "DamageTagBonusUpgrade.generated.h"

class UDamageTag;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDamageTagBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> Tags;
    
public:
    UDamageTagBonusUpgrade();
};

