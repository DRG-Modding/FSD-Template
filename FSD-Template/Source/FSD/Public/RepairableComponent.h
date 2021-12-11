#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RepairableComponent.generated.h"

class UGemResourceData;
class URepairableComponent;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepairableComponentOnFullyRepairedEvent, URepairableComponent*, Component);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepairableComponentOnAllResourcesAquiredEvent, URepairableComponent*, Component);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepairableComponentOnRepairedEvent, URepairableComponent*, Component);

UCLASS(BlueprintType)
class URepairableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRepairableComponentOnFullyRepairedEvent OnFullyRepairedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FRepairableComponentOnAllResourcesAquiredEvent OnAllResourcesAquiredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FRepairableComponentOnRepairedEvent OnRepairedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    UGemResourceData* RequiresCarriedResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ResourcesRequired)
    int32 ResourcesRequired;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsFullyRepaired;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryRepair(APlayerCharacter* User);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourcesRequired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourcesRequired() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Cheat_Repair();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URepairableComponent();
};

