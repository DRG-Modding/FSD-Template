#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGRandomizeTransformProperties.h"
#include "CSGRandomizeTransformComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGRandomizeTransformComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGRandomizeTransformProperties Properties;
    
    UCSGRandomizeTransformComponent();
};

