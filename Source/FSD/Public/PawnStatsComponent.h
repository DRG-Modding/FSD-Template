#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnStatEntriesArray.h"
#include "PawnStatsComponent.generated.h"

class UPawnStat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPawnStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPawnStatEntriesArray Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
public:
    UPawnStatsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveModifier(UPawnStat* Stat, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatValue(UPawnStat* Stat) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeModifier(UPawnStat* Stat, float CurrentValue, float NewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddModifier(UPawnStat* Stat, float Value);
    
};

