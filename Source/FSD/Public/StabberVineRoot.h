#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "StabberVineRoot.generated.h"

class AStabberVine;

UCLASS(Abstract, Blueprintable)
class AStabberVineRoot : public AEnemyPawn {
    GENERATED_BODY()
public:
    AStabberVineRoot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveVine(AStabberVine* vine);
    
};

