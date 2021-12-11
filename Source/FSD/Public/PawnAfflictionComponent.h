#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EFrozenBitsSize.h"
#include "Components/ActorComponent.h"
#include "PawnAfflictionItem.h"
#include "AfflictionEntriesArray.h"
#include "PawnAfflictionComponent.generated.h"

class UFrozenAfflictionEffect;
class UBurningAfflictionEffect;
class UPawnAffliction;
class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnAfflictionComponentOnAfflictionActivatedEvent, UPawnAffliction*, Affliction);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnAfflictionComponentOnAfflictionDeactivatedEvent, UPawnAffliction*, Affliction);

UCLASS(BlueprintType)
class UPawnAfflictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPawnAfflictionComponentOnAfflictionActivatedEvent OnAfflictionActivatedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPawnAfflictionComponentOnAfflictionDeactivatedEvent OnAfflictionDeactivatedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UPawnAffliction*, FPawnAfflictionItem> ActiveAfflictions;
    
    UPROPERTY(Replicated, Transient)
    FAfflictionEntriesArray NetworkedAfflictions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UFrozenAfflictionEffect> FrozenEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBurningAfflictionEffect> BurningEffect;
    
    UPROPERTY(EditAnywhere)
    EFrozenBitsSize EffectSize;
    
    UPROPERTY(EditAnywhere)
    float BaseEffectScale;
    
    UPROPERTY(EditAnywhere)
    bool UseDormancy;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushAffliction(UPawnAffliction* Affliction, bool onlyIfNotActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopAffliction(UPawnAffliction* Affliction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAfflictedBy(UPawnAffliction* Affliction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPawnAffliction*> GetActiveAfflictions() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPawnAfflictionComponent();
};

