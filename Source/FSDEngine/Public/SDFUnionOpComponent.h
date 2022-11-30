#pragma once
#include "CoreMinimal.h"
#include "SDFSmoothingProperties.h"
#include "SDFBaseComponent.h"
#include "SDFUnionOpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFUnionOpComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFSmoothingProperties Properties;
    
public:
    USDFUnionOpComponent();
};

