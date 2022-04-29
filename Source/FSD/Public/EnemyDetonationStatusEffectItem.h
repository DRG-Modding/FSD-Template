#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyDetonationStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnemyDetonationStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FireDetonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IceDetonation;
    
public:
    UEnemyDetonationStatusEffectItem();
};

