#pragma once
#include "CoreMinimal.h"
#include "EncounterSpecialItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEncounterSpecialItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSpawnInDeepDive;
    
    FSD_API FEncounterSpecialItem();
};

