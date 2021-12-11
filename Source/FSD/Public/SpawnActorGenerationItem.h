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
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* Box;
    
public:
    ASpawnActorGenerationItem();
};

