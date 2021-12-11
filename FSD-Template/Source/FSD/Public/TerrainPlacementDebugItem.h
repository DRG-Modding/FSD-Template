#pragma once
#include "CoreMinimal.h"
#include "TerrainPlacementBox.h"
#include "UObject/NoExportTypes.h"
#include "EDebrisColliderType.h"
#include "DebrisCapsule.h"
#include "TerrainPlacementDebugItem.generated.h"

USTRUCT()
struct FTerrainPlacementDebugItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FTerrainPlacementBox> TerrainCheckers;
    
    UPROPERTY(Transient)
    bool BoxGood;
    
    UPROPERTY(Transient)
    bool CapsuleGood;
    
    UPROPERTY(Transient)
    EDebrisColliderType CapsuleType;
    
    UPROPERTY(Transient)
    FDebrisCapsule Capsule;
    
    UPROPERTY(Transient)
    FTransform Transform;
    
    FSD_API FTerrainPlacementDebugItem();
};

