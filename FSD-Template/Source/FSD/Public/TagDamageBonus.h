#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "TagDamageBonus.generated.h"

class UDamageTag;

UCLASS(EditInlineNew)
class UTagDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UDamageTag*> Tags;
    
public:
    UTagDamageBonus();
};

