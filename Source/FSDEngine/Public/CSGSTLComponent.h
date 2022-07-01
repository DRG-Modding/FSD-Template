#pragma once
#include "CoreMinimal.h"
#include "CSGSTLProperties.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "CSGSTLComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSTLProperties Properties;
    
    UCSGSTLComponent();
};

