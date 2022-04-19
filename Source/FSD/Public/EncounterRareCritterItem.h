#pragma once
#include "CoreMinimal.h"
#include "EncounterRareCritterItem.generated.h"

class URareCritterDescriptor;

USTRUCT(BlueprintType)
struct FEncounterRareCritterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URareCritterDescriptor* Critter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    FSD_API FEncounterRareCritterItem();
};

