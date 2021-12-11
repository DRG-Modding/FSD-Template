#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "StickyFlameSpawner.generated.h"

class AStickyFlame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStickyFlameSpawnerOnStickyFlameSpawned, AStickyFlame*, StickyFlame);

UCLASS(BlueprintType)
class UStickyFlameSpawner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStickyFlameSpawnerOnStickyFlameSpawned OnStickyFlameSpawned;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AStickyFlame> StickyFlameActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlameLifetime;
    
    UPROPERTY(EditAnywhere)
    float StickyFlameIntervals;
    
    UPROPERTY(EditAnywhere)
    float StickyFlameMinDistance;
    
    UPROPERTY(Transient)
    float StickyFlameLastTime;
    
    UPROPERTY(Transient)
    FVector StickyFlameLastLocation;
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySpawnStickyFlameHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    bool TrySpawnStickyFlame(FVector Location, FVector Normal);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnStickyFlame(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
    
public:
    UStickyFlameSpawner();
};

