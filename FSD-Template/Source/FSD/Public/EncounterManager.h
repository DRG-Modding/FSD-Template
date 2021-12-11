#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EncounterManagerItem.h"
#include "EncounterManager.generated.h"

class UCritterDescriptor;
class AProceduralSetup;
class UEnemySpawnManager;
class UEnemyDescriptor;

UCLASS(BlueprintType)
class FSD_API UEncounterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpawnDistanceFromRoomBounds;
    
    UPROPERTY(Transient)
    TArray<FEncounterManagerItem> Encounters;
    
    UPROPERTY(Transient)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(Export, Transient)
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> EnemyPool;
    
    UPROPERTY(Transient)
    TArray<UEnemyDescriptor*> EncounterPool;
    
    UPROPERTY(Transient)
    TArray<UCritterDescriptor*> CritterPool;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSpawnLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyDescriptor*> GetEnemyPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyDescriptor*> GetEncounterPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCritterDescriptor*> GetCritterPool() const;
    
    UEncounterManager();
};

