#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CaveScriptComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCaveScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCaveScriptComponent();
};

