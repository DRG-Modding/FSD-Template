#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponent.h"
#include "DestructibleSubHealthComponent.generated.h"

class UDestructibleSubHealthComponent;
class USceneComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDestructibleSubHealthComponent : public USubHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthDestroyed, UDestructibleSubHealthComponent*, subHealth);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialDamageResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowInderectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassthroughDamageWhenDisabled;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Damage, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* ArmorComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubHealthDestroyed OnDestroyed;
    
public:
    UDestructibleSubHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Damage(float oldDamage);
    
};

