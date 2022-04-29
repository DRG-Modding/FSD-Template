#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FSDSteamUserStats.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDSteamUserStats : public UActorComponent {
    GENERATED_BODY()
public:
    UFSDSteamUserStats();
};

