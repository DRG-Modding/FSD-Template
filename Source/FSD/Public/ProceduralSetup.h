#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "VeinResource.h"
#include "EncountersSpawnedDelegateDelegate.h"
#include "EncounterSpecialItem.h"
#include "Engine/LatentActionManager.h"
#include "DebrisCapsule.h"
#include "CarvedResource.h"
#include "GemResourceAmount.h"
#include "CollectableSpawnableItem.h"
#include "ESpawnSettings.h"
#include "RoomNode.h"
#include "UObject/NoExportTypes.h"
#include "TunnelNode.h"
#include "GeneratedInfluenceSets.h"
#include "RandRange.h"
#include "GeneratedInstantCarvers.h"
#include "GeneratedDebris.h"
#include "PathObstacle.h"
#include "InfluenceMap.h"
#include "EDebrisItemPass.h"
#include "EDebrisCarvedType.h"
#include "ProceduralSetup.generated.h"

class UTunnelParameters;
class UPLSEncounterComponent;
class UProceduralTunnelComponent;
class USpecialEvent;
class UBiome;
class UFloodFillSettings;
class UResourceData;
class UNoisyPathfinderComponent;
class UProceduralObjectColliders;
class ADeepCSGWorld;
class UMissionDNA;
class AProceduralSetup;
class AFSDPlayerController;
class URoomGeneratorBase;
class UCaveInfluencer;

UCLASS()
class FSD_API AProceduralSetup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowItemNoisePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamServer;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamAsync;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamAsyncServer;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FEncountersSpawnedDelegate OnEncounterSpawnedEvent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpecialItem> SpecialEncountersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedSpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedTreasure;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNoisyPathfinderComponent* NoisyPathfinder;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralTunnelComponent* ProceduralTunnel;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPLSEncounterComponent* Encounters;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralObjectColliders* ObjectColliders;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVeinResource> VeinResources;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarvedResource> CarvedResources;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGemResourceAmount> GemResourcesToGenerate;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCollectableSpawnableItem> CollectablesToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnSettings SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSpawnSpecialEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCarveTunnels;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomNode> Rooms;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomNode> RoomsInitialState;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTunnelNode> tunnels;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedInfluenceSets GeneratedInfluenceSets;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedInstantCarvers GeneratedInstantCarvers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedDebris GeneratedDebris;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float missionLength;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPathObstacle> PathObstacles;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FInfluenceMap InfluenceMap;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> SpawnedResources;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CaveDepth;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AActor* PostProcessActor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CurrentRoomPass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool Pass1Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePerLevelCritterSpawning;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString LastCompletedPLSPass;
    
public:
    AProceduralSetup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, float> GetGemsResourceAmounts() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADeepCSGWorld* GetCSGWorld() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, float> GetCollectablesResourceAmounts() const;
    
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
    void GenerateLandscapeFromData(int32 NewSeed, const TArray<FRoomNode>& NewRooms, const TArray<FPathObstacle>& Obstacles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscape();
    
    UFUNCTION(BlueprintCallable)
    static void GenerateDebrisVeins_Async(AProceduralSetup*& setup, EDebrisCarvedType CarverType, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDebrisVeins(EDebrisCarvedType CarverType);
    
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
    
};

