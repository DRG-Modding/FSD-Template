#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "FuelLineEndPoint.generated.h"

class AFuelLineSegment;
class ATrackBuilderSegment;
class UFuelLineConnectPoint;
class UStaticMeshComponent;
class UTrackBuilderConnectPoint;

UCLASS(Abstract, Blueprintable)
class FSD_API AFuelLineEndPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFuelLineConnectPoint* ConnectPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFuelLineSegment> AllowedSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool OpenForConnection;
    
public:
    AFuelLineEndPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOpenForConnection(bool Open);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePing(bool InValidPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenForConnection() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
};

