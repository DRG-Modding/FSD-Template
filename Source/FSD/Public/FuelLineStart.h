#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuelLineStart.generated.h"

class ATrackBuilderSegment;
class UOutlineComponent;
class AFuelLineStart;
class USimpleObjectInfoComponent;
class UStaticMeshComponent;
class UFuelLineStartUsable;
class UTrackBuilderUsable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelLineStartOnFuelLineConnected, AFuelLineStart*, InFuelLineStart);

UCLASS(Abstract)
class FSD_API AFuelLineStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFuelLineStartOnFuelLineConnected OnFuelLineConnected;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* ObjectInfoComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFuelLineStartUsable* UsableStartFuelLine;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FuelLineConnected)
    bool bFuelLineConnected;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFuelLineConnected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelLineConnected();
    
    UFUNCTION(BlueprintCallable)
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFuelLineStart();
};

