#pragma once
#include "CoreMinimal.h"
#include "EncounterSpecialItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEncounterSpecialItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnemyDescriptor* enemy;
    
    UPROPERTY(EditAnywhere)
    float BaseChance;
    
    UPROPERTY(EditAnywhere)
    bool CanSpawnInDeepDive;
    
    FSD_API FEncounterSpecialItem();
};

