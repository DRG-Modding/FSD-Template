#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MOD_MakeEliteEnemy.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMOD_MakeEliteEnemy : public UActorComponent {
    GENERATED_BODY()
public:
    UMOD_MakeEliteEnemy();
};

