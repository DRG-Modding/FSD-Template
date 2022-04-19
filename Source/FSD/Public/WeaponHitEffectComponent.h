#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "WeaponHitEffectComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UWeaponHitEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorToSpawn;
    
public:
    UWeaponHitEffectComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnEffect(const FVector_NetQuantize& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated);
    
};

