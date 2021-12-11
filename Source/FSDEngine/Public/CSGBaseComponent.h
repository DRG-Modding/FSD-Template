#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBaseSceneComponent.h"
#include "MeshBaseProperties.h"
#include "CSGBaseComponent.generated.h"

UCLASS()
class UCSGBaseComponent : public UCSGBuilderBaseSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMeshBaseProperties BaseProperties;
    
    UCSGBaseComponent();
};

