#pragma once
#include "CoreMinimal.h"
#include "FloatDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "EnemyTemperatureReplicatorComponent.generated.h"

class UEnemyTemperatureComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UEnemyTemperatureReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnTemperatureEffectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnIsFrozenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnIsOnFireChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyTemperatureComponent> EnemyTemperatureComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_TemperatureEffect, meta=(AllowPrivateAccess=true))
    int32 TemperatureEffect;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsFrozen, meta=(AllowPrivateAccess=true))
    bool bIsFrozen;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsOnFire, meta=(AllowPrivateAccess=true))
    bool bIsOnFire;
    
public:
    UEnemyTemperatureReplicatorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TemperatureEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOnFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFrozen();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTemperatureEffect() const;
    
};

