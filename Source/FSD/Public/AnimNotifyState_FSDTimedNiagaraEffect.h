#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_FSDTimedNiagaraEffect.generated.h"

class UNiagaraSystem;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_FSDTimedNiagaraEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* Template;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool IsFirstPerson;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyAtEnd;
    
    UAnimNotifyState_FSDTimedNiagaraEffect();
};

