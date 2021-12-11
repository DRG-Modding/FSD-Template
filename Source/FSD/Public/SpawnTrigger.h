#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnTrigger.generated.h"

UCLASS()
class ASpawnTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName Message;
    
    ASpawnTrigger();
};

