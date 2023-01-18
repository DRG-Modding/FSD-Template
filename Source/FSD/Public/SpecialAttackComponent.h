#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "NameDelegateDelegate.h"
#include "SpecialAttackComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpecialAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameDelegate OnAttackActionNotify;
    
public:
    USpecialAttackComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerAttack(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnPerformAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnAborted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFrozen(bool IsFrozen);
    
};

