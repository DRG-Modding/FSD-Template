#pragma once
#include "CoreMinimal.h"
#include "SplineCableActor.h"
#include "TentaclePlantCable.generated.h"

UCLASS(Abstract, Blueprintable)
class ATentaclePlantCable : public ASplineCableActor {
    GENERATED_BODY()
public:
    ATentaclePlantCable(const FObjectInitializer& ObjectInitializer);

};

