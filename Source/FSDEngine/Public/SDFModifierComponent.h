#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFModifierProperties.h"
#include "SDFModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFModifierComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFModifierProperties Properties;
    
    USDFModifierComponent();
};

