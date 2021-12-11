#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EncounterSpecialItem.h"
#include "RoomNode.h"
#include "GemResourceAmount.h"
#include "VeinResource.h"
#include "CarvedResource.h"
#include "CollectableSpawnableItem.h"
#include "ESpawnSettings.h"
#include "TunnelNode.h"
#include "GeneratedInfluenceSets.h"
#include "GeneratedInstantCarvers.h"
#include "GeneratedDebris.h"
#include "PathObstacle.h"
#include "InfluenceMap.h"
#include "Engine/LatentActionManager.h"
#include "EDebrisItemPass.h"
#include "EDebrisCarvedType.h"
#include "UObject/NoExportTypes.h"
#include "RandRange.h"
#include "DebrisCapsule.h"
#include "ProceduralSetup.generated.h"

class UProceduralObjectColliders;
class AProceduralSetup;
class USpecialEvent;
class UNoisyPathfinderComponent;
class UProceduralTunnelComponent;
class ADeepCSGWorld;
class UFloodFillSettings;
class UMissionDNA;
class UResourceData;
class UBiome;
class AFSDPlayerController;
class UTunnelParameters;
class URoomGeneratorBase;
class UCaveInfluencer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProceduralSetupOnEncounterSpawnedEvent, AProceduralSetup*, setup);

UCLASS()
class AProceduralSetup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool ShowItemNoisePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    bool UseRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRandomStream RandomStreamServer;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRandomStream RandomStreamAsync;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRandomStream RandomStreamAsyncServer;
    
    UPROPERTY(Transient)
    FProceduralSetupOnEncounterSpawnedEvent OnEncounterSpawnedEvent;
    
    UPROPERTY(Transient)
    TArray<FEncounterSpecialItem> SpecialEncountersToSpawn;
    
    UPROPERTY(Transient)
    USpecialEvent* ForcedSpecialEvent;
    
    UPROPERTY(Transient)
    USpecialEvent* ForcedTreasure;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UNoisyPathfinderComponent* NoisyPathfinder;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProceduralTunnelComponent* ProceduralTunnel;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProceduralObjectColliders* ObjectColliders;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(Transient)
    TArray<FVeinResource> VeinResources;
    
    UPROPERTY(Transient)
    TArray<FCarvedResource> CarvedResources;
    
    UPROPERTY(Transient)
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(Transient)
    TArray<FGemResourceAmount> GemResourcesToGenerate;
    
    UPROPERTY(Transient)
    TArray<FCollectableSpawnableItem> CollectablesToGenerate;
    
    UPROPERTY(EditAnywhere)
    ESpawnSettings SpawnSettings;
    
    UPROPERTY(EditAnywhere)
    bool CanSpawnSpecialEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldCarveTunnels;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FRoomNode> Rooms;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FRoomNode> RoomsInitialState;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FTunnelNode> Tunnels;
    
    UPROPERTY(Transient)
    FGeneratedInfluenceSets GeneratedInfluenceSets;
    
    UPROPERTY(Transient)
    FGeneratedInstantCarvers GeneratedInstantCarvers;
    
    UPROPERTY(Transient)
    FGeneratedDebris GeneratedDebris;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float missionLength;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FPathObstacle> PathObstacles;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FInfluenceMap InfluenceMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UResourceData*> SpawnedResources;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float CaveDepth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* PostProcessActor;
    
    UPROPERTY(Transient)
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsInitialized;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentRoomPass;
    
    UPROPERTY(BlueprintReadWrite)
    bool Pass1Completed;
    
    UPROPERTY(EditAnywhere)
    bool UsePerLevelCritterSpawning;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FString LastCompletedPLSPass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGenerationOnClient(AFSDPlayerController* client);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSpecialEvents();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnObjectiveEncounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnObjectiveCriticalItems();
    
    UFUNCTION(BlueprintCallable)
    static void SpawnItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnItems();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnEncounters();
    
    UFUNCTION(BlueprintCallable)
    static void SpawnDebrisItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDebrisItems(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 NewSeed);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetObjectivesCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetData();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBLockedEntrances();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPLSDataRecieved();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCarverDataRecieved(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGeneratedDataReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarverDataReady(EDebrisItemPass pass) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionDNA* GetMissionDNA() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TMap<FString, float> GetGemsResourceAmounts();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADeepCSGWorld* GetCSGWorld() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TMap<FString, float> GetCollectablesResourceAmounts();
    
public:
    UFUNCTION(BlueprintCallable)
    static void GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32 CarvePass);
    
    UFUNCTION(BlueprintCallable)
    void GenerateRoomsFromGraph(int32 CarvePass);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateResourceVeins_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateResourceVeins();
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePostCarveRooms_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GeneratePostCarveRooms();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscapeFromData(int32 NewSeed, const TArray<FRoomNode>& NewRooms, const TArray<FPathObstacle>& obstacles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscape();
    
    UFUNCTION(BlueprintCallable)
    static void GenerateDebrisVeins_Async(AProceduralSetup*& setup, EDebrisCarvedType carverType, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDebrisVeins(EDebrisCarvedType carverType);
    
    UFUNCTION(BlueprintCallable)
    FVector FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance);
    
    UFUNCTION(BlueprintCallable)
    void FindEntrancesForAllConnections();
    
    UFUNCTION(BlueprintCallable)
    static void FillTunnels_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void FillTunnels();
    
    UFUNCTION(BlueprintCallable)
    void DoneCarving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoAsyncThreadGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateTunnelPaths();
    
    UFUNCTION(BlueprintCallable)
    int32 CreateItemDepths();
    
    UFUNCTION(BlueprintCallable)
    void CreateGeneratedInfluenceSet();
    
    UFUNCTION(BlueprintCallable)
    void CreateAdditionalRooms();
    
    UFUNCTION(BlueprintCallable)
    int32 ConnectRooms(UPARAM(Ref) FRoomNode& From, UPARAM(Ref) FRoomNode& to, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    
    UFUNCTION(BlueprintCallable)
    int32 ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    
    UFUNCTION(BlueprintCallable)
    void CommitCarving(bool finalCommit, bool generateMesh);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithGeneratedInstantCarvers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CarveTunnels();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginLiveGeneration();
    
    UFUNCTION(BlueprintCallable)
    void BeginGenerating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector& outCenter, FRoomNode& outRoom, float ResourceMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float range);
    
    UFUNCTION(BlueprintCallable)
    void AddImportantLocation(const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddEnemyDebris();
    
    UFUNCTION(BlueprintCallable)
    int32 AddDebrisCollider(const FDebrisCapsule& Capsule);
    
    UFUNCTION(BlueprintCallable)
    void AddCaveInfluence(UCaveInfluencer* Influencer, const FVector& Location, float range);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAirParticlesCollider(const FDebrisCapsule& Capsule);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AProceduralSetup();
};

