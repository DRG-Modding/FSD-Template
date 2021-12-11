#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGGridDuplicatorProperties.h"
#include "CSGGridDuplicatorComponent.generated.h"

UCLASS(BlueprintType)
class UCSGGridDuplicatorComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGGridDuplicatorProperties Properties;
    
    UCSGGridDuplicatorComponent();
};

