#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ECarveFilterType.h"
#include "CarveOptionsCellSize.h"
#include "MeshCarverComponent.generated.h"

class UTerrainMaterialBase;

UCLASS(EditInlineNew)
class UMeshCarverComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarverSize;
    
    UFUNCTION(BlueprintCallable)
    void Carve();
    
    UMeshCarverComponent();
};

