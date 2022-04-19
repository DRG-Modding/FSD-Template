#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuelLineStart.generated.h"

class UOutlineComponent;
class UTrackBuilderUsable;
class UStaticMeshComponent;
class AFuelLineStart;
class USimpleObjectInfoComponent;
class UFuelLineStartUsable;
class ATrackBuilderSegment;

UCLASS(Abstract)
class FSD_API AFuelLineStart : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelLineStartDelegate, AFuelLineStart*, InFuelLineStart);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFuelLineStartDelegate OnFuelLineConnected;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFuelLineStartUsable* UsableStartFuelLine;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_FuelLineConnected, meta=(AllowPrivateAccess=true))
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

