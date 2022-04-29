#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "TagDamageBonus.generated.h"

class UDamageTag;

UCLASS(Blueprintable, EditInlineNew)
class UTagDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> Tags;
    
public:
    UTagDamageBonus();
};

