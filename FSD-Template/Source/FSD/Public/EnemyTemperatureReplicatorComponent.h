#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyTemperatureReplicatorComponent.generated.h"

class UEnemyTemperatureComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyTemperatureReplicatorComponentOnIsOnFireChanged, float, FloatValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyTemperatureReplicatorComponentOnTemperatureEffectChanged, float, FloatValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyTemperatureReplicatorComponentOnIsFrozenChanged, float, FloatValue);

UCLASS(BlueprintType)
class UEnemyTemperatureReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnemyTemperatureReplicatorComponentOnTemperatureEffectChanged OnTemperatureEffectChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyTemperatureReplicatorComponentOnIsFrozenChanged OnIsFrozenChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyTemperatureReplicatorComponentOnIsOnFireChanged OnIsOnFireChanged;
    
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UEnemyTemperatureComponent> EnemyTemperatureComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TemperatureEffect)
    int32 TemperatureEffect;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsFrozen)
    bool bIsFrozen;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOnFire)
    bool bIsOnFire;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEnemyTemperatureReplicatorComponent();
};

