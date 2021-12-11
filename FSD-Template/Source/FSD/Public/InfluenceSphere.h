#pragma once
#include "CoreMinimal.h"
#include "InfluenceSphere.generated.h"

class UCaveInfluencer;

USTRUCT()
struct FInfluenceSphere {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCaveInfluencer* Influencer;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSD_API FInfluenceSphere();
};

