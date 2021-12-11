#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnStatEntriesArray.h"
#include "PawnStatsComponent.generated.h"

class UPawnStat;

UCLASS(BlueprintType)
class UPawnStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    FPawnStatEntriesArray Stats;
    
    UPROPERTY(EditAnywhere)
    bool UseDormancy;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveModifier(UPawnStat* Stat, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatValue(UPawnStat* Stat) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeModifier(UPawnStat* Stat, float CurrentValue, float NewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddModifier(UPawnStat* Stat, float Value);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPawnStatsComponent();
};

