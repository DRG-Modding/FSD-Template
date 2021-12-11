#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "StabberVineRoot.generated.h"

class AStabberVine;

UCLASS(Abstract)
class AStabberVineRoot : public AEnemyPawn {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveVine(AStabberVine* vine);
    
    AStabberVineRoot();
};

