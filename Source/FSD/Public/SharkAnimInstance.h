#pragma once
#include "CoreMinimal.h"
#include "ESharkEnemyState.h"
#include "SpiderAnimInstance.h"
#include "SharkAnimInstance.generated.h"

UCLASS(Abstract, NonTransient)
class USharkAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ESharkEnemyState SharkState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsCloseToGround;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool AttackConnected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float BendValue;
    
public:
    USharkAnimInstance();
};

