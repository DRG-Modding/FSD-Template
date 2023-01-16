#pragma once
#include "CoreMinimal.h"
#include "SDFCapsuleProperties.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFCapsuleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFCapsuleComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFCapsuleProperties Properties;
    
    USDFCapsuleComponent();
};

