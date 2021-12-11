#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "BiomeNoiseItem.h"
#include "HeatSource.h"
#include "RandRange.h"
#include "ResourceSpawner.h"
#include "BiomeEnemyEntry.h"
#include "Sound/ReverbSettings.h"
#include "UObject/NoExportTypes.h"
#include "Biome.generated.h"

class UFileMediaSource;
class UTexture2D;
class UParticleSystem;
class UFloodFillSettings;
class UUserWidget;
class UDebrisSet;
class UCaveScriptComponent;
class UCritterDescriptor;
class ADebrisDataActor;
class AActor;
class UTerrainMaterial;
class UMaterialInstance;
class UMissionStat;
class UDetailNoise;
class USoundCue;
class UPillarSettings;
class UTunnelSetting;
class UEnemyDescriptor;
class UReverbEffect;
class ULevelSequence;

UCLASS(BlueprintType)
class FSD_API UBiome : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BiomeName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BiomeShortName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BiomeDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor BiomeColor;
    
    UPROPERTY(EditAnywhere)
    int32 BiomeIndex;
    
    UPROPERTY(EditAnywhere)
    FString BiomeAnalyticsIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> BiomeMovie;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> BiomePicture;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> BiomeIcon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> BiomeLargeImage;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> BiomeWorldMap;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> BiomeMissionBar;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> BiomeMapWidget;
    
    UPROPERTY(EditAnywhere)
    FHeatSource BiomeHeatSource;
    
    UPROPERTY(EditAnywhere)
    FRandRange DepthRange;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UParticleSystem> AtmosphericParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UCaveScriptComponent>> CaveScriptComponents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExtraCaveSize;
    
    UPROPERTY(EditAnywhere)
    TArray<UDebrisSet*> Debris;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ADebrisDataActor> DebrisActor;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> PostProcessActorClass;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* RockMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DirtMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* BurnedMaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInstance*> FlavorMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<FBiomeNoiseItem> RoomNoises;
    
    UPROPERTY(EditAnywhere)
    UMissionStat* MissionCompleted;
    
    UPROPERTY()
    UFloodFillSettings* CeilingNoise;
    
    UPROPERTY()
    UDetailNoise* CeilingDetailNoise;
    
    UPROPERTY()
    UFloodFillSettings* WallNoise;
    
    UPROPERTY()
    UDetailNoise* WallDetailNoise;
    
    UPROPERTY()
    UFloodFillSettings* FloorNoise;
    
    UPROPERTY()
    UDetailNoise* FloorDetailNoise;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* PillarNoise;
    
    UPROPERTY(EditAnywhere)
    UDetailNoise* PillarDetailNoise;
    
    UPROPERTY(EditAnywhere)
    UPillarSettings* PillarSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTunnelSetting*> TunnelSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* TunnelCeilingNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* TunnelWallNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloodFillSettings* TunnelFloorNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FResourceSpawner> Resources;
    
    UPROPERTY(EditAnywhere)
    TArray<FBiomeEnemyEntry> Enemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> BannedEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> StationaryEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UCritterDescriptor*> Critters;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> AmbientSounds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Use3DAmbient;
    
    UPROPERTY(EditAnywhere)
    FReverbSettings ReverbSettings;
    
    UPROPERTY(EditAnywhere)
    float SmallCaveReverbVolume;
    
    UPROPERTY(EditAnywhere)
    UReverbEffect* SmallCaveReverb;
    
    UPROPERTY(EditAnywhere)
    float MediumCaveReverbVolume;
    
    UPROPERTY(EditAnywhere)
    UReverbEffect* MediumCaveReverb;
    
    UPROPERTY(EditAnywhere)
    float LargeCaveReverbVolume;
    
    UPROPERTY(EditAnywhere)
    UReverbEffect* LargeCaveReverb;
    
    UPROPERTY(EditAnywhere)
    USoundCue* TunnelAmbience;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> BiomeLoaderLevelSequence;
    
    UPROPERTY(EditAnywhere)
    FString BiomeLoaderLevelName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Quotes;
    
    UPROPERTY(EditAnywhere)
    float PlanetZoneSelectionWeight;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* GetRockMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AActor> GetPostProcessActorClass_Soft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* GetDirtMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ADebrisDataActor> GetDebrisActorSoftClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomeWorldMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomePicture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBiomeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomeMissionBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUserWidget> GetBiomeMapWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSoftObjectPath> GetBiomeMapAssetList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomeLargeImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBiomeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBiomeIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBiomeAnalyticsIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetAtmosphericParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetAmbientSounds() const;
    
    UBiome();
};

