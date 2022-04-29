#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "CaretakerEyeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCaretakerEyeAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
public:
    UCaretakerEyeAnimInstance();
};

