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
    
    UPROPERTY(EditAnywhere)
    float Chance;
    
    FSD_API FEncounterRareCritterItem();
};

