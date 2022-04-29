#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "FSDAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UFSDAudioComponent();
};

