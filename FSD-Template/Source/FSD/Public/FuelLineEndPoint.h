#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuelLineEndPoint.generated.h"

class ATrackBuilderSegment;
class UFuelLineConnectPoint;
class UTrackBuilderConnectPoint;
class UStaticMeshComponent;

UCLASS(Abstract)
class FSD_API AFuelLineEndPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFuelLineConnectPoint* ConnectPoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePing(bool InValidPlacement);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
public:
    AFuelLineEndPoint();
};

