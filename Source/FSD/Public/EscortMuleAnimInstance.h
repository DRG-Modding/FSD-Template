#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EscortMuleAnimInstance.generated.h"

class UHealthComponent;

UCLASS(NonTransient)
class UEscortMuleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool LeftCannistersVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool RightCannistersVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsEngineRunning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsBeingRefueled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool PlatformOut;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTookDamage(UHealthComponent* Health);
    
    UEscortMuleAnimInstance();
};

