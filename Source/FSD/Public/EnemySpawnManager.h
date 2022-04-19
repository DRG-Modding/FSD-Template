#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EnemyDestroyedSignatureDelegate.h"
#include "EnemySpawnedSignatureDelegate.h"
#include "SpawnQueueItem.h"
#include "SpawnRarityModifierItem.h"
#include "UObject/NoExportTypes.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "EnemySpawnManager.generated.h"

class UHealthComponentBase;
class USpawnEffectsComponent;
class UStatusEffect;
class APawn;
class UEnemyDescriptor;
class AProceduralSetup;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSD_API UEnemySpawnManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnemyDestroyedSignature OnEnemyDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnemyDestroyedSignature OnEnemyDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnemySpawnedSignature OnEnemySpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USpawnEffectsComponent* SpawnEffects;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> ActiveEnemies;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> ActiveSwarmerEnemies;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> ActiveGlobalStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UEnemyDescriptor*, FSpawnRarityModifierItem> SpawnRarityModifiers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> ActiveCritters;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> CritcalEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveSwarmers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveCritters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceBeforeCleanup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SwarmerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RegularTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CritterTag;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpawnQueueItem> SpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bDestroyingAllEnemies;
    
public:
    UEnemySpawnManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnerDestroyed(APawn* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SpawnEnemy(UEnemyDescriptor* descriptor, const FTransform& Transform, const FEnemySpawnedDelegate& Callback, bool useSpawnFX, bool Alert);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawningEnabled(bool newSpawningEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSpawner(APawn* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSpawnedEnemy(AActor* enemy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PromoteToCritical(APawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpawningEnabled() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EnemyDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EnemyDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyAllEnemies();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool CanSpawn(UEnemyDescriptor* EnemyDescriptor) const;
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect);
    
};

