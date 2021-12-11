#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "CoolDownItemAggregator.generated.h"

class USoundBase;
class AItem;

UCLASS()
class UCoolDownItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioCoolDownFinished;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CooldownRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool CoolDownIsPaused;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* Item;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool IsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCoolDown(bool startPaused);
    
    UCoolDownItemAggregator();
};

