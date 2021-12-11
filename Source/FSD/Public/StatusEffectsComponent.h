#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ActiveStatusEffectBank.h"
#include "StatusEffectsComponent.generated.h"

class UHealthComponentBase;
class UStatusEffectExclusiveKey;
class UObject;
class UStatusEffect;
class AActor;

UCLASS(BlueprintType)
class UStatusEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FActiveStatusEffectBank> ActiveStatusEffects;
    
    UPROPERTY(Export, Transient)
    UHealthComponentBase* OwnerHealth;
    
    UPROPERTY(Transient)
    TSet<UStatusEffectExclusiveKey*> ActiveExclusiveKeys;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreAll;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PushActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopAllActiveStatusEffects(AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PopActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasActiveEffect(TSubclassOf<UStatusEffect> StatusEffect) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UStatusEffect* CreateStatusEffectInstance(TSubclassOf<UStatusEffect> StatusEffect, UObject* Owner);
    
    UStatusEffectsComponent();
};

