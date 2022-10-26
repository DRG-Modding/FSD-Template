#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "DataDepositObjective.generated.h"

class AFacilityPowerStation;
class UDebrisPositioning;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDataDepositObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFacilityPowerStation> TowerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* DebrisPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Complete, meta=(AllowPrivateAccess=true))
    bool Complete;
    
public:
    UDataDepositObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Complete();
    
    UFUNCTION(BlueprintCallable)
    void OnHackingProgressChange(float Progress);
    
};

