#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGCircleDuplicatorProperties.h"
#include "CSGCircleDuplicatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGCircleDuplicatorComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGCircleDuplicatorProperties Properties;
    
    UCSGCircleDuplicatorComponent();
};

