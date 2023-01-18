#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimatedItem.h"
#include "Templates/SubclassOf.h"
#include "RessuplyPodItem.generated.h"

class AActor;
class ARessuplyPod;
class UItemPlacerAggregator;
class UObject;

UCLASS(Blueprintable)
class ARessuplyPodItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ResupplyBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* ItemPlacerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OrderDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Used, meta=(AllowPrivateAccess=true))
    bool Used;
    
public:
    ARessuplyPodItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Call_Resupply(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Used();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetResourceCost(UObject* WorldContextObject) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemPlacerAggregator* GetActiveAggregator() const;
    
};

