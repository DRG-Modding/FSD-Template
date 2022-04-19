#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EncounterManagerItem.h"
#include "EncounterManager.generated.h"

class UCritterDescriptor;
class AProceduralSetup;
class UEnemySpawnManager;
class UEnemyDescriptor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSD_API UEncounterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceFromRoomBounds;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterManagerItem> Encounters;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EnemyPool;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EncounterPool;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCritterDescriptor*> CritterPool;
    
public:
    UEncounterManager();
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSpawnLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyDescriptor*> GetEnemyPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyDescriptor*> GetEncounterPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCritterDescriptor*> GetCritterPool() const;
    
};

