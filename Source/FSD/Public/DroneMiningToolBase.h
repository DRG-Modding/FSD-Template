#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Components/ActorComponent.h"
#include "MineHitEventDelegate.h"
#include "DroneMiningToolBase.generated.h"

class UTerrainMaterial;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDroneMiningToolBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMineHitEvent HitSomething;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SameHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MineRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MineStrength;
    
public:
    UDroneMiningToolBase();
    UFUNCTION(BlueprintCallable)
    void StopMining();
    
    UFUNCTION(BlueprintCallable)
    void StartMining();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnEffects(UTerrainMaterial* aTerrainMaterial, bool aParialHit, FVector_NetQuantize aLocation, FVector_NetQuantize aImpactNormal);
    
};

