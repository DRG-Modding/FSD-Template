#pragma once
#include "CoreMinimal.h"
#include "SDFBaseProperties.h"
#include "CSGBuilderBaseSceneComponent.h"
#include "SDFBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFBaseComponent : public UCSGBuilderBaseSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBaseProperties BaseProperties;
    
    USDFBaseComponent();
};

