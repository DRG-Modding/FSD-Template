#pragma once
#include "CoreMinimal.h"
#include "ECarveFilterType.h"
#include "DebrisBase.h"
#include "DebrisInfluence.h"
#include "EDebrisCarvedType.h"
#include "Templates/SubclassOf.h"
#include "UDebrisStaticCarveMesh.h"
#include "DebrisStaticCarved.generated.h"

class AActor;
class UTerrainMaterial;

UCLASS(Blueprintable, EditInlineNew)
class UDebrisStaticCarved : public UDebrisBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisCarvedType CarverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUDebrisStaticCarveMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebrisInfluence CaveInfluenceToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveOffsetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnAttachClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachSpawnOffsetDistance;
    
    UDebrisStaticCarved();
};

