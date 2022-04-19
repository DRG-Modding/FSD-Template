#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "CSGSTLProperties.h"
#include "CSGSTLComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSTLProperties Properties;
    
    UCSGSTLComponent();
};

