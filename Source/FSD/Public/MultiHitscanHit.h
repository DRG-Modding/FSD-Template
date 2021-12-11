#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "MultiHitscanHit.generated.h"

USTRUCT(BlueprintType)
struct FMultiHitscanHit {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint8 TargetComponentIndex;
    
    UPROPERTY(Transient)
    uint8 PhysicalMaterialIndex;
    
    UPROPERTY(Transient)
    FVector_NetQuantize HitLocation;
    
    UPROPERTY(Transient)
    FVector_NetQuantizeNormal ImpactNormal;
    
    UPROPERTY(Transient)
    uint8 BoneIndex;
    
    UPROPERTY(Transient)
    bool PlayImpactSound;
    
    UPROPERTY(Transient)
    bool SpawnDecal;
    
    FSD_API FMultiHitscanHit();
};

