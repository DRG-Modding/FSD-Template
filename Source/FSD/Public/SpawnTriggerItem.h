#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenerationItem.h"
#include "SpawnTriggerItem.generated.h"

class AActor;

UCLASS(Abstract)
class ASpawnTriggerItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Trigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Message;
    
public:
    ASpawnTriggerItem();
};

