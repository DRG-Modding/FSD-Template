#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "DeepProceduralMeshComponent.generated.h"

class UTerrainMaterialCore;
class UBodySetup;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UDeepProceduralMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* ProcMeshBodySetup;
    
    UDeepProceduralMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const;
    
};

