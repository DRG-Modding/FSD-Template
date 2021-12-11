#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BoscoAbillity.h"
#include "BoscoSpawnActorAbillity.generated.h"

class AActor;

UCLASS()
class UBoscoSpawnActorAbillity : public UBoscoAbillity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnedActorClass;
    
    UBoscoSpawnActorAbillity();
};

