#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CaveScriptComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UCaveScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCaveScriptComponent();
};

