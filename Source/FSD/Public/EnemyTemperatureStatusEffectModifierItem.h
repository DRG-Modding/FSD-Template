#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyTemperatureStatusEffectModifierItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnemyTemperatureStatusEffectModifierItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnTemperatureModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DouseFireTemperatureModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreezeTemperatureModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnFreezeTemperatureModifier;
    
public:
    UEnemyTemperatureStatusEffectModifierItem();

};

