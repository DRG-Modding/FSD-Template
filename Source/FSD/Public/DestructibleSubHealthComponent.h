#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponent.h"
#include "DestructibleSubHealthComponent.generated.h"

class USceneComponent;
class UDestructibleSubHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestructibleSubHealthComponentOnDestroyed, UDestructibleSubHealthComponent*, subHealth);

UCLASS()
class UDestructibleSubHealthComponent : public USubHealthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere)
    float RadialDamageResistance;
    
    UPROPERTY(EditAnywhere)
    bool AllowInderectDamage;
    
    UPROPERTY(EditAnywhere)
    bool PassthroughDamageWhenDisabled;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* ArmorComponent;
    
    UPROPERTY(BlueprintAssignable)
    FDestructibleSubHealthComponentOnDestroyed OnDestroyed;
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Damage(float oldDamage);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDestructibleSubHealthComponent();
};

