#pragma once
#include "CoreMinimal.h"
#include "TerrainPlacementBox.h"
#include "EDebrisColliderType.h"
#include "DebrisCapsule.h"
#include "UObject/NoExportTypes.h"
#include "TerrainPlacementDebugItem.generated.h"

USTRUCT(BlueprintType)
struct FTerrainPlacementDebugItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTerrainPlacementBox> TerrainCheckers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool BoxGood;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CapsuleGood;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDebrisColliderType CapsuleType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDebrisCapsule Capsule;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FSD_API FTerrainPlacementDebugItem();
};

