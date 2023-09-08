#include "FacilityObjective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UFacilityObjective::SpawnFacilityEncounters(AProceduralSetup* Setup, UEncounterManager* Encounters, UDebrisPositioning* Positioning) {
}

TArray<FTransform> UFacilityObjective::SpawnEndBattleTurrets(int32 amountOfTurrets, AProceduralSetup* Setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<AActor*>& existingTurrets, bool& success) {
    return TArray<FTransform>();
}

void UFacilityObjective::SetMainFacility(ATetherStation* NewMainFacility) {
}

void UFacilityObjective::SetGeneratorRooms(TArray<int32>& generatorRoomsIndicies) {
}

void UFacilityObjective::SecondGeneratorEncounterSpawn(APawn* spawned) {
}


void UFacilityObjective::ProgressCurrentObjective() {
}

AActor* UFacilityObjective::PlaceObjectInRoom(AProceduralSetup* Setup, const FRoomNode& RoomNode, UDebrisPositioning* Positioning, TSubclassOf<AActor> placementActor, FRandomStream RandomStream, const bool checkImportantLocations) {
    return NULL;
}

void UFacilityObjective::OnResourceChanged(UCappedResource* Resource, float Amount) {
}

void UFacilityObjective::OnRep_ObjectivesStage() {
}

void UFacilityObjective::OnRep_GeneratorsActivated() {
}

void UFacilityObjective::OnRep_AmountCollected() {
}


bool UFacilityObjective::IsSubObjectiveComplete(int32 objectiveIndex) const {
    return false;
}

void UFacilityObjective::InitGeneratorCount(int32 generators) {
}

FTransform UFacilityObjective::GetTurretGoal(AProceduralSetup* Setup, const FVector& Origin, float idealRange, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool& success) {
    return FTransform{};
}

TArray<AActor*> UFacilityObjective::GetShieldGenerators() {
    return TArray<AActor*>();
}

int32 UFacilityObjective::GetShieldGeneratorCount() const {
    return 0;
}

void UFacilityObjective::GetObjectTransformInRoom(FTransform& Transform, AProceduralSetup* Setup, const FRoomNode& RoomNode, UDebrisPositioning* Positioning, TSubclassOf<AActor> placementActor, FRandomStream RandomStream, const bool checkImportantLocations) {
}

int32 UFacilityObjective::GetFacilityRoomIndex() const {
    return 0;
}

FVector UFacilityObjective::GetFacilityLocation() const {
    return FVector{};
}

FSubObjective UFacilityObjective::GetCurrentObjective() const {
    return FSubObjective{};
}

void UFacilityObjective::GeneratorActivated() {
}

void UFacilityObjective::FirstGeneratorEncounterSpawn(APawn* spawned) {
}

void UFacilityObjective::DropOverCharger(AProceduralSetup* Setup, int32 roomIndex, const FVector& facilityLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> NewGeneratorClass, bool AddImportantLocation) {
}

void UFacilityObjective::ChangeObjective() {
}

void UFacilityObjective::AddShieldGenerator(AActor* charger, int32 roomIndex) {
}

void UFacilityObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFacilityObjective, ObjectivesStage);
    DOREPLIFETIME(UFacilityObjective, AmountCollected);
    DOREPLIFETIME(UFacilityObjective, GeneratorsActivated);
}

UFacilityObjective::UFacilityObjective() {
    this->GeneratorCount = 3;
    this->ObjectivesStage = 0;
    this->EncounterDifficulty = 10.00f;
    this->MinimumTurretEncounters = 0;
    this->mainFacility = NULL;
    this->MainFacilityRoom = -1;
    this->HasRemovedMainShield = false;
    this->GoalResource = NULL;
    this->AmountRequired = 1.00f;
    this->AmountCollected = 0.00f;
    this->GeneratorsActivated = 0;
}

