#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebrisItem.h"
#include "EDebrisItemPass.h"
#include "Components/ActorComponent.h"
#include "LevelGenerationCarverLists.h"
#include "TunnelNode.h"
#include "RoomNode.h"
#include "PathObstacle.h"
#include "GeneratedInfluenceSets.h"
#include "ProceduralController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProceduralController : public UActorComponent {
    GENERATED_BODY()
public:
    UProceduralController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestTunnelData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendTunnelData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendRoomData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SendRequestedPLSData();
    
    UFUNCTION(BlueprintCallable)
    void SendRequestedCarverData(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPLSData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCarverData(EDebrisItemPass pass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedTunnelData(const TArray<FTunnelNode>& tunnels);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendTunnelData(const TArray<FTunnelNode>& tunnels);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RecieveCarverSizes(int32 pass, int32 carverCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivePLSLevelCarver(int32 pass, const FLevelGenerationCarverLists& levelCarvers);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivePLSInfluencers(const FGeneratedInfluenceSets& influenceSet);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivePLSDebris(const TArray<FGeneratedDebrisItem>& levelDebris);
    
};

