#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERoomMirror.h"
#include "ERoomMirroringSupport.h"
#include "GameplayTagContainer.h"
#include "RoomBurner.generated.h"

class UBiome;
class URoomGenerator;
class UDifficultySetting;
class UEnemyDescriptor;
class UMissionMutator;
class UMissionWarning;
class USpecialEvent;
class UMissionTemplate;
class ADeepCSGWorld;
class AProceduralSetup;

UCLASS()
class ARoomBurner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LiveUpdateEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomMirror MirrorTest;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    URoomGenerator* RoomGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomMirroringSupport MirrorSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRoomCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RoomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcePlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* TestEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionMutator* TestMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> TestWarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* TestSpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* TestTreasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* MissionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMissionTemplate* CustomMissionTemplate;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* PLSLiveEditor;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    URoomGenerator* LiveEditRoomGenerator;
    
public:
    ARoomBurner();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnEncounter(AProceduralSetup* setup);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URoomGenerator* GetRoomGenerator() const;
    
};

