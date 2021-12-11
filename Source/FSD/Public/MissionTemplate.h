#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ResourceSpawner.h"
#include "SavableDataAsset.h"
#include "ObjectiveMissionIcon.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MissionTemplate.generated.h"

class AProceduralSetup;
class UMissionTemplate;
class UObjective;
class UObject;
class UFSDSaveGame;
class UMutator;
class UMissionComplexity;
class UWorld;
class AFSDGameMode;
class UMissionDuration;
class UTexture2D;
class UMissionDNA;
class UDebrisActorComponent;
class UTutorialComponent;
class UBiome;
class UGeneratedMission;
class UMissionWarning;
class UMissionMutator;

UCLASS(Blueprintable, EditInlineNew)
class UMissionTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FResourceSpawner> ResourceDistribution;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UObjective>> SecondaryObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UObjective>> DeepDiveObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AProceduralSetup> pls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AFSDGameMode> GameMode;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionComplexity*> LockedComplexities;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionDuration*> LockedDurations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MissionName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> MissionImageLarge;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> MissionButtonImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* MissionIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* MissionIconSmall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MissionColor;
    
    UPROPERTY(EditAnywhere)
    int32 MissionTypeIndex;
    
    UPROPERTY(EditAnywhere)
    FString MissionTypeAnalyticsIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UMissionDNA>> DNA;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UDebrisActorComponent>> DebrisComponents;
    
    UPROPERTY(EditAnywhere)
    bool MustBeUnlocked;
    
    UPROPERTY(EditAnywhere)
    float RoomEncounerScale;
    
    UPROPERTY(EditAnywhere)
    float StationaryEnemyScale;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UTutorialComponent>> Tutorials;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_SetMissionParameters(UGeneratedMission* mission, FRandomStream& Random);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMissionDuration*> GetValidDurations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMissionComplexity*> GetValidComplexities() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FObjectiveMissionIcon GetPrimaryObjectiveIconFromAsset(UMissionTemplate* mission, bool getSmallVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetPrimaryObjectiveIcon(bool getSmallVersion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AProceduralSetup> GetPLS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionTypeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMissionImageLarge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMissionButtonImage() const;
    
    UFUNCTION(BlueprintCallable)
    UGeneratedMission* GenerateMission(const UObject* WorldContextObject, UBiome* Biome, int32 Seed, int32 GlobalSeed, int32 missionIndex, UMissionComplexity* limitComplexity, UMissionDuration* limitDuration, UMissionMutator* Mutator, TArray<UMissionWarning*> Warnings, TSubclassOf<UObjective> forceSecondary);
    
    UMissionTemplate();
};

