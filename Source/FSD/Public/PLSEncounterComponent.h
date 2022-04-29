#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PLSEncounterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPLSEncounterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPLSEncounterComponent();
};

