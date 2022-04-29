#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TreasureRewarder.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTreasureRewarder : public UActorComponent {
    GENERATED_BODY()
public:
    UTreasureRewarder();
};

