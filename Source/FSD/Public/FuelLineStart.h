#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuelLineStart.generated.h"

class AFuelLineEndPoint;
class AFuelLineSegment;
class ATrackBuilderSegment;
class UFuelLineStartUsable;
class UOutlineComponent;
class USimpleObjectInfoComponent;
class UStaticMeshComponent;
class UTrackBuilderUsable;

UCLASS(Abstract, Blueprintable)
class FSD_API AFuelLineStart : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelLineStartedDelegate, bool, InFuelLineStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelLineConnectedDelegate, AFuelLineEndPoint*, InFuelLineStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFirstFuelLineDelegate, AFuelLineSegment*, InFirstSegment);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelLineConnectedDelegate OnFuelLineConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelLineStartedDelegate OnFuelLineStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFirstFuelLineDelegate OnFirstFuelLineSegment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFuelLineStartUsable* UsableStartFuelLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FuelLineConnected, meta=(AllowPrivateAccess=true))
    bool bFuelLineConnected;
    
public:
    AFuelLineStart();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFuelLineConnected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelLineConnected();
    
    UFUNCTION(BlueprintCallable)
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    
};

