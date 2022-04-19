#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBaseSceneComponent.h"
#include "SDFBaseProperties.h"
#include "SDFBaseComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFBaseComponent : public UCSGBuilderBaseSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBaseProperties BaseProperties;
    
    USDFBaseComponent();
};

