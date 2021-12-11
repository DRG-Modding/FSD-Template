#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecoilImpulse.generated.h"

USTRUCT()
struct FRecoilImpulse {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Rotation;
    
    UPROPERTY()
    FVector2D Impulse;
    
    FSD_API FRecoilImpulse();
};

