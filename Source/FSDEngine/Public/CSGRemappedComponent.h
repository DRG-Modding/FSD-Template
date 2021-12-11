#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "RemappedProperties.h"
#include "CSGRemappedComponent.generated.h"

UCLASS(BlueprintType)
class UCSGRemappedComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRemappedProperties Properties;
    
    UCSGRemappedComponent();
};

