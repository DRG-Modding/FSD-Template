#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERoomMirror.h"
#include "GameplayTagContainer.h"
#include "ERoomMirroringSupport.h"
#include "RoomBurner.generated.h"

class UBiome;
class UDifficultySetting;
class UMissionWarning;
class UMissionMutator;
class URoomGenerator;
class UEnemyDescriptor;
class AProceduralSetup;
class USpecialEvent;
class UMissionTemplate;
class ADeepCSGWorld;

UCLASS()
class ARoomBurner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    bool LiveUpdateEditor;
    
    UPROPERTY(EditAnywhere)
    ERoomMirror MirrorTest;
    
    UPROPERTY(EditInstanceOnly)
    URoomGenerator* RoomGenerator;
    
    UPROPERTY(EditAnywhere)
    float RoomRadius;
    
    UPROPERTY(EditAnywhere)
    ERoomMirroringSupport MirrorSupport;
    
    UPROPERTY(EditAnywhere)
    bool ShowRoomCollider;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RoomTags;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    UBiome* Biome;
    
    UPROPERTY(EditAnywhere)
    UDifficultySetting* Difficulty;
    
    UPROPERTY(EditAnywhere)
    int32 ForcePlayerCount;
    
    UPROPERTY(EditAnywhere)
    bool GenerateDebris;
    
    UPROPERTY(EditAnywhere)
    bool GenerateItems;
    
    UPROPERTY(EditAnywhere)
    bool GenerateResources;
    
    UPROPERTY(EditAnywhere)
    bool SpawnEncounters;
    
    UPROPERTY(EditAnywhere)
    UEnemyDescriptor* TestEnemy;
    
    UPROPERTY(EditAnywhere)
    int32 TestEnemyCount;
    
    UPROPERTY(EditAnywhere)
    UMissionMutator* TestMutator;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionWarning*> TestWarnings;
    
    UPROPERTY(EditAnywhere)
    USpecialEvent* TestSpecialEvent;
    
    UPROPERTY(EditAnywhere)
    USpecialEvent* TestTreasure;
    
    UPROPERTY(EditAnywhere)
    UMissionTemplate* MissionTemplate;
    
    UPROPERTY(EditAnywhere, Instanced)
    UMissionTemplate* CustomMissionTemplate;
    
    UPROPERTY(Transient)
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(Transient)
    AProceduralSetup* PLSLiveEditor;
    
private:
    UPROPERTY(Transient)
    URoomGenerator* LiveEditRoomGenerator;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnEncounter(AProceduralSetup* setup);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URoomGenerator* GetRoomGenerator() const;
    
    ARoomBurner();
};

