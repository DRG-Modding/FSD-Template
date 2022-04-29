#pragma once
#include "CoreMinimal.h"
#include "MineHitEventDelegate.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "DroneMiningToolBase.generated.h"

class UTerrainMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneMiningToolBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMineHitEvent HitSomething;
    
protected:
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float SameHitDistance;
    
    UPROPERTY(EditAnywhere)
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

