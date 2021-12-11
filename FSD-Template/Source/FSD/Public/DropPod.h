#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDropPodState.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DropPod.generated.h"

class UAutoCarverComponent;
class UCurveFloat;
class UObject;
class ADropPod;

UCLASS()
class ADropPod : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropHeight;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Replicated)
    FVector TargetLocation;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UAutoCarverComponent* AutoCarver;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DepartCurve;
    
    UPROPERTY(EditAnywhere)
    float CarverRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector CarverScale;
    
    UPROPERTY(EditAnywhere)
    float DepartureTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EDropPodState State;
    
    UPROPERTY(EditAnywhere)
    float DrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float FreeFallAcceleration;
    
    UPROPERTY(EditAnywhere)
    float FreeFallSpeed;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDrilling();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PrepForTakeOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepForTakeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrillingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeparting();
    
public:
    UFUNCTION(BlueprintCallable)
    static ADropPod* DropToMission(UObject* WorldContextObject, TSubclassOf<ADropPod> podClass, const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Depart();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADropPod();
};

