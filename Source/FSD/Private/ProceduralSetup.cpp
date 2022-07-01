#include "ProceduralSetup.h"
#include "Net/UnrealNetwork.h"
#include "NoisyPathfinderComponent.h"
#include "ProceduralTunnelComponent.h"
#include "PLSEncounterComponent.h"
#include "ProceduralObjectColliders.h"

class AProceduralSetup;
class UMissionDNA;
class ADeepCSGWorld;
class UTunnelParameters;
class URoomGeneratorBase;
class UCaveInfluencer;


void AProceduralSetup::SpawnSpecialEvents() {
}

void AProceduralSetup::SpawnObjectiveEncounter() {
}

void AProceduralSetup::SpawnObjectiveCriticalItems() {
}

void AProceduralSetup::SpawnItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::SpawnItems() {
}

void AProceduralSetup::SpawnEncounters() {
}

void AProceduralSetup::SpawnDebrisItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth) {
}

void AProceduralSetup::SpawnDebrisItems(EDebrisItemPass pass) {
}

void AProceduralSetup::SetSeed(int32 NewSeed) {
}


void AProceduralSetup::RemoveBLockedEntrances() {
}




bool AProceduralSetup::IsGeneratedDataReady() const {
    return false;
}

bool AProceduralSetup::IsCarverDataReady(EDebrisItemPass pass) const {
    return false;
}

void AProceduralSetup::InitializeObjectives() {
}

UMissionDNA* AProceduralSetup::GetMissionDNA() const {
    return NULL;
}

TMap<FString, float> AProceduralSetup::GetGemsResourceAmounts() const {
    return TMap<FString, float>();
}

ADeepCSGWorld* AProceduralSetup::GetCSGWorld() const {
    return NULL;
}

TMap<FString, float> AProceduralSetup::GetCollectablesResourceAmounts() const {
    return TMap<FString, float>();
}

void AProceduralSetup::GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32 CarvePass) {
}

void AProceduralSetup::GenerateRoomsFromGraph(int32 CarvePass) {
}

void AProceduralSetup::GenerateResourceVeins_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::GenerateResourceVeins() {
}

void AProceduralSetup::GeneratePostCarveRooms_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::GeneratePostCarveRooms() {
}



void AProceduralSetup::GenerateDebrisVeins_Async(AProceduralSetup*& setup, EDebrisCarvedType CarverType, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::GenerateDebrisVeins(EDebrisCarvedType CarverType) {
}

FVector AProceduralSetup::FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance) {
    return FVector{};
}

void AProceduralSetup::FindEntrancesForAllConnections() {
}

void AProceduralSetup::FillTunnels_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo) {
}

void AProceduralSetup::FillTunnels() {
}

void AProceduralSetup::DoneCarving() {
}

bool AProceduralSetup::DoAsyncThreadGeneration() const {
    return false;
}

void AProceduralSetup::CreateTunnelPaths() {
}

int32 AProceduralSetup::CreateItemDepths() {
    return 0;
}

void AProceduralSetup::CreateGeneratedInfluenceSet() {
}

int32 AProceduralSetup::ConnectRooms(FRoomNode& From, FRoomNode& to, bool hasDirt, UTunnelParameters* tunnelParameterOverride) {
    return 0;
}

int32 AProceduralSetup::ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride) {
    return 0;
}

void AProceduralSetup::CommitCarving(bool finalCommit, bool generateMesh) {
}

void AProceduralSetup::CarveWithGeneratedInstantCarvers() {
}



void AProceduralSetup::BeginGenerating() {
}


int32 AProceduralSetup::AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector& outCenter, FRoomNode& outRoom, float ResourceMultiplier) {
    return 0;
}

void AProceduralSetup::AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float range) {
}

void AProceduralSetup::AddImportantLocation(const FVector& Location, float Radius) {
}

void AProceduralSetup::AddEnemyDebris() {
}

int32 AProceduralSetup::AddDebrisCollider(const FDebrisCapsule& Capsule) {
    return 0;
}

void AProceduralSetup::AddCaveInfluence(UCaveInfluencer* Influencer, const FVector& Location, float range) {
}

int32 AProceduralSetup::AddAirParticlesCollider(const FDebrisCapsule& Capsule) {
    return 0;
}

void AProceduralSetup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProceduralSetup, CaveDepth);
}

AProceduralSetup::AProceduralSetup() {
    this->ShowItemNoisePattern = false;
    this->Seed = -1;
    this->UseRandomSeed = true;
    this->ForcedSpecialEvent = NULL;
    this->ForcedTreasure = NULL;
    this->NoisyPathfinder = CreateDefaultSubobject<UNoisyPathfinderComponent>(TEXT("NoisyPathfinder"));
    this->ProceduralTunnel = CreateDefaultSubobject<UProceduralTunnelComponent>(TEXT("ProceduralTunnel"));
    this->Encounters = CreateDefaultSubobject<UPLSEncounterComponent>(TEXT("Encounters"));
    this->ObjectColliders = CreateDefaultSubobject<UProceduralObjectColliders>(TEXT("ObjectColliders"));
    this->CSGWorld = NULL;
    this->PathfinderNoise = NULL;
    this->MissionDNA = NULL;
    this->SpawnSettings = ESpawnSettings::Normal;
    this->CanSpawnSpecialEvents = true;
    this->ShouldCarveTunnels = true;
    this->Biome = NULL;
    this->missionLength = 0.00f;
    this->CaveDepth = 0.00f;
    this->PostProcessActor = NULL;
    this->SpecialEvent = NULL;
    this->IsInitialized = false;
    this->CurrentRoomPass = 0;
    this->Pass1Completed = false;
    this->UsePerLevelCritterSpawning = false;
}

