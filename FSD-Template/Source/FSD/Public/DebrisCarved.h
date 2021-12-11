#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDebrisCarvedType.h"
#include "DebrisBase.h"
#include "UDebrisCarveMesh.h"
#include "CarveOptionsCellSize.h"
#include "ECarveFilterType.h"
#include "DebrisInfluence.h"
#include "DebrisCarved.generated.h"

class AActor;
class UTerrainMaterial;

UCLASS(EditInlineNew)
class UDebrisCarved : public UDebrisBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDebrisCarvedType carverType;
    
    UPROPERTY(EditAnywhere)
    TArray<FUDebrisCarveMesh> Meshes;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    FDebrisInfluence CaveInfluenceToAdd;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY(EditAnywhere)
    int32 MinNumCarves;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumCarves;
    
    UPROPERTY(EditAnywhere)
    float CarveOffsetRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnAttachClass;
    
    UPROPERTY(EditAnywhere)
    float AttachSpawnOffsetDistance;
    
    UDebrisCarved();
};

