#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "PlayerArmorStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UPlayerArmorStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange ChangeAmount;
    
public:
    UPlayerArmorStatusEffectItem();
};

