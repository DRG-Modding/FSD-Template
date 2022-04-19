#pragma once
#include "CoreMinimal.h"
#include "InfluenceSphere.generated.h"

class UCaveInfluencer;

USTRUCT()
struct FInfluenceSphere {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* Influencer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSD_API FInfluenceSphere();
};

