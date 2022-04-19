#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenerationItem.h"
#include "SpawnActorGenerationItem.generated.h"

class AActor;
class UBoxComponent;

UCLASS()
class ASpawnActorGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorToSpawn;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
public:
    ASpawnActorGenerationItem();
};

