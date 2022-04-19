#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "AfflictionEntriesArray.h"
#include "AfflictionChangeDelegateDelegate.h"
#include "PawnAfflictionItem.h"
#include "EFrozenBitsSize.h"
#include "PawnAfflictionComponent.generated.h"

class UPawnAffliction;
class UBurningAfflictionEffect;
class UFrozenAfflictionEffect;
class UHealthComponentBase;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UPawnAfflictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAfflictionChangeDelegate OnAfflictionActivatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAfflictionChangeDelegate OnAfflictionDeactivatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPawnAffliction*, FPawnAfflictionItem> ActiveAfflictions;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAfflictionEntriesArray NetworkedAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFrozenAfflictionEffect> FrozenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBurningAfflictionEffect> BurningEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenBitsSize EffectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
public:
    UPawnAfflictionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

