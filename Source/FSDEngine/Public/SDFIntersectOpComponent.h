#pragma once
#include "CoreMinimal.h"
#include "SDFSmoothingProperties.h"
#include "SDFBaseComponent.h"
#include "SDFIntersectOpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFIntersectOpComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFSmoothingProperties Properties;
    
    USDFIntersectOpComponent();
};

