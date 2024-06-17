#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_FSDTimedNiagaraEffect.h"
#include "AnimNotifyState_FSDTimedVanityAnimEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_FSDTimedVanityAnimEffect : public UAnimNotifyState_FSDTimedNiagaraEffect {
    GENERATED_BODY()
public:
    UAnimNotifyState_FSDTimedVanityAnimEffect();

};

