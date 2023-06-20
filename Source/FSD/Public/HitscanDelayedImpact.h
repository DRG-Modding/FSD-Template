#pragma once
#include "CoreMinimal.h"
#include "HitscanDelayedImpact.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FHitscanDelayedImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FirstPersonImpactSound;
    
    FSD_API FHitscanDelayedImpact();
};

