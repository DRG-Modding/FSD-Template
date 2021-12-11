#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionMutatorManager.generated.h"

UCLASS(Abstract)
class UMissionMutatorManager : public UActorComponent {
    GENERATED_BODY()
public:
    UMissionMutatorManager();
};

