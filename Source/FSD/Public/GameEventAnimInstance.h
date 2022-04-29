#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameEventAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGameEventAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float StageProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEventActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AreEventStartersActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EventFailed;
    
public:
    UGameEventAnimInstance();
};

