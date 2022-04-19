#pragma once
#include "CoreMinimal.h"
#include "ShotMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FShotMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Undercharge;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Overcharge;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool TriBurst;
    
    FSD_API FShotMultiplier();
};

