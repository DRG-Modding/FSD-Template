#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnTrigger.generated.h"

UCLASS()
class ASpawnTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName Message;
    
    ASpawnTrigger();
};

