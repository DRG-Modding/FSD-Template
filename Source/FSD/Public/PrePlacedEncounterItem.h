#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrePlacedEncounterItem.generated.h"

class UEnemyDescriptor;
class AEncounterActor;

USTRUCT(BlueprintType)
struct FPrePlacedEncounterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* descriptor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform Location;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AEncounterActor* EncounterActor;
    
    FSD_API FPrePlacedEncounterItem();
};

