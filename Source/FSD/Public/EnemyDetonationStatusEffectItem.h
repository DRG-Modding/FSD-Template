#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyDetonationStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UEnemyDetonationStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool FireDetonation;
    
    UPROPERTY(EditAnywhere)
    bool IceDetonation;
    
public:
    UEnemyDetonationStatusEffectItem();
};

