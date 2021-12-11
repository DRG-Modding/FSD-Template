#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ProjectileState.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FProjectileState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize Velocity;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY(Export)
    USceneComponent* HomingTargetComponent;
    
    UPROPERTY()
    uint8 IsSimulating: 1;
    
    UPROPERTY()
    uint8 IsBouncy: 1;
    
    UPROPERTY()
    uint8 IsHoming: 1;
    
    UPROPERTY()
    uint8 IsPenetrating: 1;
    
    FSD_API FProjectileState();
};

