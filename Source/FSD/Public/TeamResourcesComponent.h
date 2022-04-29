#pragma once
#include "CoreMinimal.h"
#include "ResourcesComponent.h"
#include "TeamResourcesComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTeamResourcesComponent : public UResourcesComponent {
    GENERATED_BODY()
public:
    UTeamResourcesComponent();
};

