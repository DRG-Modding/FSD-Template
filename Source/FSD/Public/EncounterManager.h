#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EncounterManagerItem.h"
#include "EncounterManager.generated.h"

class AProceduralSetup;
class UCritterDescriptor;
class UEnemyDescriptor;
class UEnemyGroupDescriptor;
class UEnemySpawnManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UEncounterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceFromRoomBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterManagerItem> Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EnemyPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EncounterPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddEncounterFromGroup(UEnemyGroupDescriptor* Group, float Difficulty, FVector Location, float Radius);
    
};

