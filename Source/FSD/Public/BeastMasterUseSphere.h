#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "BeastMasterUseSphere.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBeastMasterUseSphere : public USphereComponent {
    GENERATED_BODY()
public:
    UBeastMasterUseSphere();
};

