#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "PatrolBotDecorative.generated.h"

UCLASS(Blueprintable)
class APatrolBotDecorative : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
    APatrolBotDecorative(const FObjectInitializer& ObjectInitializer);

};

