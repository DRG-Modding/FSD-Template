#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "SpecialAttackComponent.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialAttackComponentOnAttackActionNotify, FName, nameValue);

UCLASS()
class USpecialAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(BlueprintAssignable)
    FSpecialAttackComponentOnAttackActionNotify OnAttackActionNotify;
    
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
    
public:
    USpecialAttackComponent();
};

