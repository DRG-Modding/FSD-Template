#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameEventAnimInstance.generated.h"

UCLASS(NonTransient)
class UGameEventAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float StageProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsEventActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool AreEventStartersActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool EventFailed;
    
public:
    UGameEventAnimInstance();
};

