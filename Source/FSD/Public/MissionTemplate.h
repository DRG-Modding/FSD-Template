#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveMissionIcon.h"
#include "ResourceSpawner.h"
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "MissionTemplate.generated.h"

class AFSDGameMode;
class AProceduralSetup;
class UBiome;
class UDebrisActorComponent;
class UFSDSaveGame;
class UGeneratedMission;
class UMissionComplexity;
class UMissionDNA;
class UMissionDuration;
class UMissionMutator;
class UMissionTemplate;
class UMissionWarning;
class UMutator;
class UObject;
class UObjective;
class UTexture2D;
class UTutorialComponent;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UMissionTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceSpawner> ResourceDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> SecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> DeepDiveObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AProceduralSetup> pls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFSDGameMode> GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionComplexity*> LockedComplexities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionDuration*> LockedDurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MissionImageLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MissionButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MissionIconSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MissionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionTypeAnalyticsIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMissionDNA>> DNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UDebrisActorComponent>> DebrisComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomEncounerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryEnemyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTutorialComponent>> Tutorials;
    
public:
    UMissionTemplate();
protected:
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
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UObjective> GetObjectiveClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionTypeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMissionImageLarge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMissionButtonImage() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UGeneratedMission* GenerateMission(const UObject* WorldContextObject, UBiome* Biome, int32 Seed, int32 GlobalSeed, int32 missionIndex, UMissionComplexity* limitComplexity, UMissionDuration* limitDuration, UMissionMutator* Mutator, TArray<UMissionWarning*> Warnings, TArray<TSubclassOf<UObjective>> forceSecondary);
    
};

