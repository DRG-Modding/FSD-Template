#pragma once
#include "CoreMinimal.h"
#include "TracerData.generated.h"

class UFXSystemAsset;
class USoundCue;

USTRUCT(BlueprintType)
struct FTracerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* MainParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* TrailParticle;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* WhizbySound;
    
    UPROPERTY(EditAnywhere)
    float WhizBySoundCooldown;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    FSD_API FTracerData();
};

