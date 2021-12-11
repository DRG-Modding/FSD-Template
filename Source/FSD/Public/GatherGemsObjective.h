#pragma once
#include "CoreMinimal.h"
#include "ResourceBasedObjective.h"
#include "GatherGemsObjective.generated.h"

class UGemResourceData;
class UCappedResource;

UCLASS(Abstract)
class UGatherGemsObjective : public UResourceBasedObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 GemsRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GemsSpawnedModifier;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_GemsCollected)
    int32 GemsCollected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGemResourceData* GemResource;
    
    UFUNCTION(BlueprintCallable)
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GemsCollected(int32 prevAmount);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGatherGemsObjective();
};

