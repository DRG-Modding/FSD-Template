#pragma once
#include "CoreMinimal.h"
#include "SpiderAnimInstance.h"
#include "ESharkEnemyState.h"
#include "SharkAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class USharkAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESharkEnemyState SharkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCloseToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AttackConnected;
    
    UPROPERTY(EditAnywhere, Transient)
    float BendValue;
    
public:
    USharkAnimInstance();
};

