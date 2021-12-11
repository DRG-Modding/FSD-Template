#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGCircleDuplicatorProperties.h"
#include "CSGCircleDuplicatorComponent.generated.h"

UCLASS(BlueprintType)
class UCSGCircleDuplicatorComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGCircleDuplicatorProperties Properties;
    
    UCSGCircleDuplicatorComponent();
};

