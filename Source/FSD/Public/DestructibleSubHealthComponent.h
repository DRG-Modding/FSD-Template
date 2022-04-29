#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponent.h"
#include "DestructibleSubHealthComponent.generated.h"

class UDestructibleSubHealthComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDestructibleSubHealthComponent : public USubHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthDestroyed, UDestructibleSubHealthComponent*, subHealth);
    
protected:
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere)
    float RadialDamageResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowInderectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassthroughDamageWhenDisabled;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ArmorComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubHealthDestroyed OnDestroyed;
    
public:
    UDestructibleSubHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
protected:
    UFUNCTION()
    void OnRep_Damage(float oldDamage);
    
};

