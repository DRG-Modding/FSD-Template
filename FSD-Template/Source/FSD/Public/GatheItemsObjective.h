#pragma once
#include "CoreMinimal.h"
#include "ResourceBasedObjective.h"
#include "GatheItemsObjective.generated.h"

class UCollectableResourceData;
class UCappedResource;

UCLASS(Abstract)
class UGatheItemsObjective : public UResourceBasedObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ItemsRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ItemsSpawnedModifier;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ItemsCollected)
    int32 ItemsCollected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCollectableResourceData* ItemResource;
    
    UFUNCTION(BlueprintCallable)
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemsCollected(int32 prevAmount);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGatheItemsObjective();
};

