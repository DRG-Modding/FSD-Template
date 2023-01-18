#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFSmoothingProperties.h"
#include "SDFSubOpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFSubOpComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFSmoothingProperties Properties;
    
public:
    USDFSubOpComponent();
};

