#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "SimpleHealthComponent.generated.h"

class UEnemyComponent;
class UPawnStat;
class UDamageTag;

UCLASS()
class USimpleHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(EditAnywhere)
    bool bShowHealthBar;
    
    UPROPERTY(EditAnywhere)
    FVector HealthBarOffsetWorld;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(EditAnywhere)
    TArray<UDamageTag*> RequiredDamageTags;
    
    UPROPERTY(EditAnywhere)
    bool AutomaticFlushNetDormancy;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    float HealFromDeath(float Amount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USimpleHealthComponent();
};

