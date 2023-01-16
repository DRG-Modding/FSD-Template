#pragma once
#include "CoreMinimal.h"
#include "EncounterSpecialItem.h"
#include "SpecialEventSpawner.h"
#include "EncounterSpecialEventSpawner.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEncounterSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterSpecialItem Encounter;
    
public:
    UEncounterSpecialEventSpawner();
};

