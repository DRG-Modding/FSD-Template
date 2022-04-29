#pragma once
#include "CoreMinimal.h"
#include "ShotMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FShotMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float Undercharge;
    
    UPROPERTY(EditAnywhere, Transient)
    float Overcharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool TriBurst;
    
    FSD_API FShotMultiplier();
};

