#pragma once
#include "CoreMinimal.h"
#include "ManagedEncounterItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FManagedEncounterItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UEnemyDescriptor* descriptor;
    
    UPROPERTY(Transient)
    int32 Amount;
    
    FSD_API FManagedEncounterItem();
};

