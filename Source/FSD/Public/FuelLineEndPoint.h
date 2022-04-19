#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuelLineEndPoint.generated.h"

class UFuelLineConnectPoint;
class UStaticMeshComponent;
class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;

UCLASS(Abstract)
class FSD_API AFuelLineEndPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFuelLineConnectPoint* ConnectPoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
public:
    AFuelLineEndPoint();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePing(bool InValidPlacement);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
};

