#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "ProjectileAttackDelegateDelegate.h"
#include "EProjectileAttackRotationType.h"
#include "ProjetileSpawnedDelegateDelegate.h"
#include "ProjectileAttackBaseComponent.generated.h"

class UAnimMontage;
class UProjectileAttack;
class AActor;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UProjectileAttackBaseComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UProjectileAttack*> Projectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileAttackRotationType RotationHandling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProjectilesIgnoreEachOther;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FProjectileAttackDelegate OnAttackStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FProjectileAttackDelegate OnProjectileFiredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FProjectileAttackDelegate OnAttackEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FProjetileSpawnedDelegate OnProjectileSpawnedEvent;
    
public:
    UProjectileAttackBaseComponent();
protected:
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
    
};

