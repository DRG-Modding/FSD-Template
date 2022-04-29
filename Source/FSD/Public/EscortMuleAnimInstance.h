#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EscortMuleAnimInstance.generated.h"

class UHealthComponent;

UCLASS(Blueprintable, NonTransient)
class UEscortMuleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LeftCannistersVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RightCannistersVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEngineRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBeingRefueled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PlatformOut;
    
public:
    UEscortMuleAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTookDamage(UHealthComponent* Health);
    
};

