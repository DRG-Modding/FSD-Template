#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DelegateDelegate.h"
#include "RiftSpawnerDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RiftSpawnerComponent.generated.h"

class AActor;
class ACoreRift;
class UDebrisPositioning;
class UDifficultySetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API URiftSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRiftSpawnerDelegate OnRiftSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnFinishedSpawningRifts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAllRiftsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisallowSpawning;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Spawned, meta=(AllowPrivateAccess=true))
    TArray<AActor*> spawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnOneAtATime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UDifficultySetting*, int32> AmountByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACoreRift> RiftClass;
    
public:
    URiftSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopSpawning();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartSpawning();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnRift();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReportRiftOpened(AActor* Rift);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PreFetchSpawnLocations(const FVector& Origin);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Spawned();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetRifts();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CollectSpawnLocations(const FVector& Origin);
    
};

