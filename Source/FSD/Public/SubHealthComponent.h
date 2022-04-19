#pragma once
#include "CoreMinimal.h"
#include "EEnemyHealthScaling.h"
#include "EHealthbarType.h"
#include "Components/ActorComponent.h"
#include "SubHealthComponentDelegateDelegate.h"
#include "DamageSigDelegate.h"
#include "Health.h"
#include "HealthChangedSigDelegate.h"
#include "SubHealthComponent.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class USubHealthComponent : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDamageSig OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubHealthComponentDelegate OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthbarType HealthbarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyHealthScaling EnemyHealthScaling;
    
public:
    USubHealthComponent();
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
    
    
    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)*/
    AActor* GetOwner() const override PURE_VIRTUAL(GetOwner, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    EHealthbarType GetHealthbarType() const override PURE_VIRTUAL(GetHealthbarType, return EHealthbarType::None;);
    
};

