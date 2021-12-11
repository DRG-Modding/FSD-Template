#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CappedResource.generated.h"

class UCappedResource;
class UResourceData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCappedResourceOnChanged, UCappedResource*, Resource, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCappedResourceOnIncreased, UCappedResource*, Resource, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCappedResourceOnFull, UCappedResource*, Resource);

UCLASS(BlueprintType)
class UCappedResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCappedResourceOnChanged OnChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCappedResourceOnIncreased OnIncreased;
    
    UPROPERTY(BlueprintAssignable)
    FCappedResourceOnFull OnFull;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    UResourceData* Data;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentAmount)
    float currentAmount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float MaxAmount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float TotalCollected;
    
    UPROPERTY(ReplicatedUsing=OnRep_FullFlag)
    int32 FullFlag;
    
public:
    UFUNCTION(BlueprintCallable)
    float TransferAll(UCappedResource* Receiver);
    
    UFUNCTION(BlueprintCallable)
    float Transfer(float Amount, UCappedResource* Receiver);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FullFlag(int32 OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAmount(float OldAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveResource(UObject* WorldContext, bool& IsCompleted) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCraftingResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCapacityPct() const;
    
    UFUNCTION(BlueprintCallable)
    float Deduct(float Amount);
    
    UFUNCTION(BlueprintCallable)
    float Add(float Amount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCappedResource();
};

