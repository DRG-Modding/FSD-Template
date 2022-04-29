#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UAttackEffect : public UObject {
    GENERATED_BODY()
public:
    UAttackEffect();
};

