#pragma once
#include "CoreMinimal.h"
#include "BoscoAbillity.h"
#include "Templates/SubclassOf.h"
#include "BoscoSpawnActorAbillity.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBoscoSpawnActorAbillity : public UBoscoAbillity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnedActorClass;
    
    UBoscoSpawnActorAbillity();
};

