#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyAnimInstance.h"
#include "TerminatorAnimInstance.generated.h"

UCLASS(NonTransient)
class UTerminatorAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Lean;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ForwardLean;
    
public:
    UTerminatorAnimInstance();
};

