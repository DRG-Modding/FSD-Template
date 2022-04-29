#pragma once
#include "CoreMinimal.h"
#include "RadarPointComponent.h"
#include "NetworkedRadarPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNetworkedRadarPointComponent : public URadarPointComponent {
    GENERATED_BODY()
public:
    UNetworkedRadarPointComponent();
};

