#pragma once
#include "CoreMinimal.h"
#include "CSGCircleDuplicatorProperties.h"
#include "CSGBaseComponent.h"
#include "CSGCircleDuplicatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGCircleDuplicatorComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGCircleDuplicatorProperties Properties;
    
    UCSGCircleDuplicatorComponent();
};

