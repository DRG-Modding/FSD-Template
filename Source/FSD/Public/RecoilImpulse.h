#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecoilImpulse.generated.h"

USTRUCT(BlueprintType)
struct FRecoilImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector2D Impulse;
    
    FSD_API FRecoilImpulse();
};

