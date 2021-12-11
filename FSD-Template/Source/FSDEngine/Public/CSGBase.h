#pragma once
#include "CoreMinimal.h"
#include "BuilderBase.h"
#include "UObject/NoExportTypes.h"
#include "MeshBaseProperties.h"
#include "CSGBase.generated.h"

UCLASS(Abstract)
class UCSGBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMeshBaseProperties BaseProperties;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    UCSGBase();
};

