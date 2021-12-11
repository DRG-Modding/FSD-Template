#pragma once
#include "CoreMinimal.h"
#include "RadarPointComponent.h"
#include "NetworkedRadarPointComponent.generated.h"

UCLASS()
class UNetworkedRadarPointComponent : public URadarPointComponent {
    GENERATED_BODY()
public:
    UNetworkedRadarPointComponent();
};

