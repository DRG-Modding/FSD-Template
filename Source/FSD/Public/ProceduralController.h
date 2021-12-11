#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebrisItem.h"
#include "Components/ActorComponent.h"
#include "LevelGenerationCarverLists.h"
#include "EDebrisItemPass.h"
#include "RoomNode.h"
#include "TunnelNode.h"
#include "PathObstacle.h"
#include "GeneratedInfluenceSets.h"
#include "ProceduralController.generated.h"

UCLASS(Blueprintable)
class UProceduralController : public UActorComponent {
    GENERATED_BODY()
public:
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
    void ReceivedTunnelData(const TArray<FTunnelNode>& Tunnels);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendTunnelData(const TArray<FTunnelNode>& Tunnels);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RecieveCarverSizes(int32 pass, int32 carverCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivePLSLevelCarver(int32 pass, const FLevelGenerationCarverLists& levelCarvers);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivePLSInfluencers(const FGeneratedInfluenceSets& influenceSet);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivePLSDebris(const TArray<FGeneratedDebrisItem>& levelDebris);
    
public:
    UProceduralController();
};

