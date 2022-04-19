#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDropPodState.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DropPod.generated.h"

class UCurveFloat;
class UAutoCarverComponent;
class UObject;
class ADropPod;

UCLASS()
class FSD_API ADropPod : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropHeight;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAutoCarverComponent* AutoCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DepartCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarverRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CarverScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepartureTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EDropPodState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrillSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeFallAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeFallSpeed;
    
public:
    ADropPod();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

