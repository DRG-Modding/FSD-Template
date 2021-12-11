#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "CSGSTLProperties.h"
#include "CSGSTLComponent.generated.h"

UCLASS()
class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGSTLProperties Properties;
    
    UCSGSTLComponent();
};

