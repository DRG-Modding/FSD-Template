#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IRandRange.h"
#include "Objective.h"
#include "SubObjective.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "RandInterval.h"
#include "UObject/NoExportTypes.h"
#include "RoomNode.h"
#include "UObject/NoExportTypes.h"
#include "FacilityObjective.generated.h"

class ARessuplyPod;
class AActor;
class UEnemyDescriptor;
class APawn;
class UResourceData;
class ATetherStation;
class AProceduralSetup;
class UEncounterManager;
class UDebrisPositioning;
class UCappedResource;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UFacilityObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARessuplyPod> generatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> GeneratorBeaconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectivesStage, meta=(AllowPrivateAccess=true))
    int32 ObjectivesStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubObjective> SubObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate OnFirstEncounterDroneSpawned_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate OnSecondEncounterDroneSpawned_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> spawnedEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> TurretDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> GeneratorRoomTurretDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EncounterEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval Diversity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange TurretEncountersRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumTurretEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange TunnelTurretsRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SmallGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATetherStation* mainFacility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ShieldGeneratorRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MainFacilityRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasRemovedMainShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ShieldGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* GoalResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AmountCollected, meta=(AllowPrivateAccess=true))
    float AmountCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GeneratorsActivated, meta=(AllowPrivateAccess=true))
    int32 GeneratorsActivated;
    
public:
    UFacilityObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnFacilityEncounters(AProceduralSetup* setup, UEncounterManager* Encounters, UDebrisPositioning* Positioning);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> SpawnEndBattleTurrets(int32 amountOfTurrets, AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<AActor*>& existingTurrets, bool& success);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMainFacility(ATetherStation* NewMainFacility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGeneratorRooms(TArray<int32>& generatorRoomsIndicies);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SecondGeneratorEncounterSpawn(APawn* spawned);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_AddEnemies(AProceduralSetup* setup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ProgressCurrentObjective();
    
    UFUNCTION(BlueprintCallable)
    AActor* PlaceObjectInRoom(AProceduralSetup* setup, const FRoomNode& RoomNode, UDebrisPositioning* Positioning, TSubclassOf<AActor> placementActor);
    
    UFUNCTION(BlueprintCallable)
    void OnResourceChanged(UCappedResource* Resource, float Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesStage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GeneratorsActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmountCollected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCoreDeposited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubObjectiveComplete(int32 objectiveIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void InitGeneratorCount(int32 generators);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTurretGoal(AProceduralSetup* setup, const FVector& Origin, float idealRange, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool& success);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetShieldGenerators();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShieldGeneratorCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFacilityRoomIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFacilityLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSubObjective GetCurrentObjective() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GeneratorActivated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FirstGeneratorEncounterSpawn(APawn* spawned);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropOverCharger(AProceduralSetup* setup, int32 roomIndex, const FVector& facilityLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> NewGeneratorClass);
    
    UFUNCTION(BlueprintCallable)
    void ChangeObjective();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddShieldGenerator(AActor* charger, int32 roomIndex);
    
};

