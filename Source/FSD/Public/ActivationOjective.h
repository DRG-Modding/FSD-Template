#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ActivationOjective.generated.h"

UCLASS(Abstract)
class UActivationOjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ObjectivesFound)
    int32 ObjectivesFound;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ObjectivesToFind)
    int32 ObjectivesToFind;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesToFind(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesFound(int32 prevAmount);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UActivationOjective();
};

