#pragma once
#include "CoreMinimal.h"
#include "ResourceDebris.generated.h"

class UDebrisBase;

USTRUCT(BlueprintType)
struct FResourceDebris {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InfluencerRange;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisBase* Debris;
    
    FSD_API FResourceDebris();
};

