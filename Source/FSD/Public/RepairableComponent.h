#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RepairedDelegateDelegate.h"
#include "RepairableComponent.generated.h"

class UGemResourceData;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URepairableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepairedDelegate OnFullyRepairedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepairedDelegate OnAllResourcesAquiredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepairedDelegate OnRepairedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGemResourceData* RequiresCarriedResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResourcesRequired, meta=(AllowPrivateAccess=true))
    int32 ResourcesRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsFullyRepaired;
    
public:
    URepairableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

