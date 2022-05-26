#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectItem.h"
#include "MakeAttackableStatusEffectItem.generated.h"

class UAttackerPositioningComponent;

UCLASS(Blueprintable, EditInlineNew)
class UMakeAttackableStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackCostModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAttackerPositioningComponent> ComponentClass;
    
public:
    UMakeAttackableStatusEffectItem();
};

