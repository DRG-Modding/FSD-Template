#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ECarveFilterType.h"
#include "CarveOptionsCellSize.h"
#include "MeshCarverComponent.generated.h"

class UTerrainMaterialBase;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UMeshCarverComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpensiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CarveOptionsCellSize CarverSize;
    
    UMeshCarverComponent();
    UFUNCTION(BlueprintCallable)
    void Carve();
    
};

