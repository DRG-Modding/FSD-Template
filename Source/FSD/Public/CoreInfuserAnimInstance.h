#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CoreInfuserAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCoreInfuserAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PoweredUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRewardSelected;
    
public:
    UCoreInfuserAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardSelected();
    
};

