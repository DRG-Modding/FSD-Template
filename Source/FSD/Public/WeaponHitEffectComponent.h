#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "WeaponHitEffectComponent.generated.h"

class AActor;

UCLASS()
class UWeaponHitEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float EffectChance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnEffect(const FVector_NetQuantize& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated);
    
public:
    UWeaponHitEffectComponent();
};

