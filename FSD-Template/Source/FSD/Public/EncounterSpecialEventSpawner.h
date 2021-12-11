#pragma once
#include "CoreMinimal.h"
#include "SpecialEventSpawner.h"
#include "EncounterSpecialItem.h"
#include "EncounterSpecialEventSpawner.generated.h"

UCLASS(EditInlineNew)
class UEncounterSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FEncounterSpecialItem Encounter;
    
public:
    UEncounterSpecialEventSpawner();
};

