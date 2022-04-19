#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "DeepProceduralMeshComponent.generated.h"

class UBodySetup;
class UTerrainMaterialCore;
class UPhysicalMaterial;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UDeepProceduralMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* ProcMeshBodySetup;
    
    UDeepProceduralMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const;
    
};

