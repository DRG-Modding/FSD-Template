#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RejoinListener.h"
#include "PerkUsage.h"
#include "PerkUsageComponent.generated.h"

class UPerkAsset;

UCLASS()
class FSD_API UPerkUsageComponent : public UActorComponent, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PerkUsageReplicated)
    TArray<FPerkUsage> PerkUsageReplicated;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MarkPerkUsed(UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CheatReset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PerkUsageReplicated();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPerkUsageComponent();
    
    // Fix for true pure virtual functions not being implemented
};

