#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "CaretakerEyeAnimInstance.generated.h"

UCLASS(NonTransient)
class UCaretakerEyeAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsOpen;
    
public:
    UCaretakerEyeAnimInstance();
};

