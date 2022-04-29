#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "SimpleHealthComponent.generated.h"

class UPawnStat;
class UEnemyComponent;
class UDamageTag;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USimpleHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HealthBarOffsetWorld;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    
    UPROPERTY(EditAnywhere)
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> RequiredDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticFlushNetDormancy;
    
public:
    USimpleHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    float HealFromDeath(float Amount);
    
};

