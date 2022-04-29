#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CoreInfuserPlatformAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCoreInfuserPlatformAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool keyInserted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool dispensRewards;
    
public:
    UCoreInfuserPlatformAnimInstance();
};

