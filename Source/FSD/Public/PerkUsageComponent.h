#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RejoinListener.h"
#include "PerkUsage.h"
#include "PerkUsageComponent.generated.h"

class UPerkAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPerkUsageComponent : public UActorComponent, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PerkUsageReplicated, meta=(AllowPrivateAccess=true))
    TArray<FPerkUsage> PerkUsageReplicated;
    
public:
    UPerkUsageComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MarkPerkUsed(UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CheatReset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PerkUsageReplicated();
    
    
    // Fix for true pure virtual functions not being implemented
};

