#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBaseSceneComponent.h"
#include "MeshBaseProperties.h"
#include "CSGBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGBaseComponent : public UCSGBuilderBaseSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshBaseProperties BaseProperties;
    
    UCSGBaseComponent();
};

