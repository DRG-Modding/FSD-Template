#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActorTrackingSubsystem.generated.h"

UCLASS(Blueprintable)
class UActorTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UActorTrackingSubsystem();
};

