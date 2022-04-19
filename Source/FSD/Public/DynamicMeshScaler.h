#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DynamicMeshScaler.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDynamicMeshScaler : public UActorComponent {
    GENERATED_BODY()
public:
    UDynamicMeshScaler();
};

