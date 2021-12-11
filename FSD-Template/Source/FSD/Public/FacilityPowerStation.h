#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacilityPowerStation.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFacilityPowerStationOnHackingProgressDelegate, float, hackProgress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFacilityPowerStationOnProgresspointDelegate, float, hackProgress);

UCLASS()
class FSD_API AFacilityPowerStation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFacilityPowerStationOnHackingProgressDelegate OnHackingProgressDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFacilityPowerStationOnProgresspointDelegate OnProgresspointDelegate;
    
protected:
    UPROPERTY(EditAnywhere)
    float ProgressPoint;
    
    UPROPERTY(EditAnywhere)
    int32 ProgresPointCount;
    
    UPROPERTY(EditAnywhere)
    float TimeToDefend;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Progress)
    float Progress;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsHacking)
    bool IsHacking;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHacking();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartHacking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsHacking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingChanged(bool NewIsHacking);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHacked() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityPowerStation();
};

