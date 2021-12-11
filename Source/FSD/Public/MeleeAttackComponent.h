#pragma once
#include "CoreMinimal.h"
#include "DamageAttackComponent.h"
#include "MeleeAttackComponent.generated.h"

class UAnimMontage;
class UAttackEffect;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMeleeAttackComponentOnAttackStartedEvent);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMeleeAttackComponentOnAttackEndedEvent);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMeleeAttackComponentOnDamageAppliedEvent);

UCLASS()
class UMeleeAttackComponent : public UDamageAttackComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(EditAnywhere)
    bool CenterOnTarget;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UAttackEffect*> AttackEffects;
    
    UPROPERTY(BlueprintAssignable)
    FMeleeAttackComponentOnAttackStartedEvent OnAttackStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FMeleeAttackComponentOnDamageAppliedEvent OnDamageAppliedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FMeleeAttackComponentOnAttackEndedEvent OnAttackEndedEvent;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectMontage() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPerformAttack(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    
public:
    UMeleeAttackComponent();
};

