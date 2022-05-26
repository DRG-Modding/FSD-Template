#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "FearAoEBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFearAoEBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float range;
    
public:
    UFearAoEBonus();
};

