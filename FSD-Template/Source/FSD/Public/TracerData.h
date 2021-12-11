#pragma once
#include "CoreMinimal.h"
#include "TracerData.generated.h"

class UFXSystemAsset;
class USoundCue;

USTRUCT(BlueprintType)
struct FTracerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* MainParticle;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* TrailParticle;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    USoundCue* WhizbySound;
    
    UPROPERTY(EditAnywhere)
    float WhizBySoundCooldown;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    FSD_API FTracerData();
};

