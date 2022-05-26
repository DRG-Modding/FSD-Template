#pragma once
#include "CoreMinimal.h"
#include "ResourceDebris.generated.h"

class UDebrisBase;

USTRUCT(BlueprintType)
struct FResourceDebris {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluencerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisBase* Debris;
    
    FSD_API FResourceDebris();
};

