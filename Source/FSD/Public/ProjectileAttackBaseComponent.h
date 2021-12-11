#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "ProjectileAttackBaseComponent.generated.h"

class UProjectileAttack;
class UAnimMontage;
class AActor;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProjectileAttackBaseComponentOnProjectileFiredEvent);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProjectileAttackBaseComponentOnAttackStartedEvent);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProjectileAttackBaseComponentOnAttackEndedEvent);

UCLASS(Abstract)
class UProjectileAttackBaseComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UProjectileAttack*> Projectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool UseSocketForRotation;
    
    UPROPERTY(EditAnywhere)
    bool ProjectilesIgnoreEachOther;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileAttackBaseComponentOnAttackStartedEvent OnAttackStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileAttackBaseComponentOnProjectileFiredEvent OnProjectileFiredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileAttackBaseComponentOnAttackEndedEvent OnAttackEndedEvent;
    
    UFUNCTION(BlueprintCallable)
    bool TriggerMontage(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectMontage() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPerformAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastProjectileFired();
    
    UFUNCTION(BlueprintCallable)
    void CancelMontage();
    
public:
    UProjectileAttackBaseComponent();
};

