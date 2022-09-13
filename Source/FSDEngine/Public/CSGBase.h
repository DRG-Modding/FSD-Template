#pragma once
#include "CoreMinimal.h"
#include "BuilderBase.h"
#include "MeshBaseProperties.h"
#include "UObject/NoExportTypes.h"
#include "CSGBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UCSGBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshBaseProperties BaseProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UCSGBase();
};

