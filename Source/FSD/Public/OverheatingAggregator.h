#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "OverheatingAggregator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOverheatingAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverheatingProgressChanged, float, Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverheatedChanged, bool, Overheated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverheatingProgressChanged OnOverheatingProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverheatedChanged OnOverheatedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HeatLossPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OverheatedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOverheated, meta=(AllowPrivateAccess=true))
    bool bIsOverheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Temperature, meta=(AllowPrivateAccess=true))
    float Temperature;
    
public:
    UOverheatingAggregator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetTemperature(float NewTemperature);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetIsOverheated(bool NewOverheated);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Temperature();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOverheated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTemperature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverheatingProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOverheated() const;
    
};

