#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveStatusEffectBank.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectsComponent.generated.h"

class AActor;
class UHealthComponentBase;
class UObject;
class UStatusEffect;
class UStatusEffectExclusiveKey;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatusEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveStatusEffectBank> ActiveStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* OwnerHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UStatusEffectExclusiveKey*> ActiveExclusiveKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreAll;
    
public:
    UStatusEffectsComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PushActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopAllActiveStatusEffectsOfType(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackAmount(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFullStackAmount(TSubclassOf<UStatusEffect> StatusEffect) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UStatusEffect* CreateStatusEffectInstance(TSubclassOf<UStatusEffect> StatusEffect, UObject* Owner);
    
};

