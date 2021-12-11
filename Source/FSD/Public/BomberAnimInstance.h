#pragma once
#include "CoreMinimal.h"
#include "FlyingBugAnimInstance.h"
#include "BomberAnimInstance.generated.h"

UCLASS(NonTransient)
class UBomberAnimInstance : public UFlyingBugAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsBombing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSpiraling;
    
public:
    UBomberAnimInstance();
};

