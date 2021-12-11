#pragma once
#include "CoreMinimal.h"
#include "EHealthbarType.h"
#include "Components/ActorComponent.h"
#include "Health.h"
#include "EEnemyHealthScaling.h"
#include "SubHealthComponent.generated.h"

class USubHealthComponent;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentOnCanTakeDamageChanged, USubHealthComponent*, subHealth);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentOnHealthChanged, float, Health);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentOnDamageTaken, float, Amount);

UCLASS(Abstract, BlueprintType)
class USubHealthComponent : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSubHealthComponentOnDamageTaken OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable)
    FSubHealthComponentOnHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSubHealthComponentOnCanTakeDamageChanged OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    EHealthbarType HealthbarType;
    
    UPROPERTY(EditAnywhere)
    EEnemyHealthScaling EnemyHealthScaling;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamage(bool canTakeDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTakeDamage() const;
    
    USubHealthComponent();
    
    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)
    AActor* GetOwner() const override PURE_VIRTUAL(GetOwner, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    EHealthbarType GetHealthbarType() const override PURE_VIRTUAL(GetHealthbarType, return EHealthbarType::None;);*/
    
};

