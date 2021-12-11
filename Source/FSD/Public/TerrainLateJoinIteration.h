#pragma once
#include "CoreMinimal.h"
#include "TerrainLateJoinIteration.generated.h"

USTRUCT()
struct FTerrainLateJoinIteration {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 DrillsIndex;
    
    UPROPERTY(Transient)
    int32 MeltsIndex;
    
    UPROPERTY(Transient)
    int32 PickAxeIndex;
    
    UPROPERTY(Transient)
    int32 FloatingIndex;
    
    UPROPERTY(Transient)
    int32 ColliderCarvesIndex;
    
    UPROPERTY(Transient)
    int32 MeshCarvesIndex;
    
    UPROPERTY(Transient)
    int32 ExplosionsIndex;
    
    UPROPERTY(Transient)
    int32 SplineIndex;
    
    UPROPERTY(Transient)
    int32 LateJoinIndex;
    
    UPROPERTY(Transient)
    int32 DebrisIndex;
    
    UPROPERTY(Transient)
    int32 ChunkVisibilityIndex;
    
    FSD_API FTerrainLateJoinIteration();
};

