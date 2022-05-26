#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FloatDelegateDelegate.h"
#include "EnemyTemperatureReplicatorComponent.generated.h"

class UEnemyTemperatureComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyTemperatureReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnTemperatureEffectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnIsFrozenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnIsOnFireChanged;
    
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UEnemyTemperatureComponent> EnemyTemperatureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TemperatureEffect, meta=(AllowPrivateAccess=true))
    int32 TemperatureEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFrozen, meta=(AllowPrivateAccess=true))
    bool bIsFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOnFire, meta=(AllowPrivateAccess=true))
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

