#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "CoolDownItemAggregator.generated.h"

class USoundBase;
class AItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCoolDownItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioCoolDownFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CoolDownIsPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
public:
    UCoolDownItemAggregator();
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool IsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCoolDown(bool startPaused);
    
};

