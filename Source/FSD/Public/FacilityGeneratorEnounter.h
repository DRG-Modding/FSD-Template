#pragma once
#include "CoreMinimal.h"
#include "RandInterval.h"
#include "FacilityGeneratorEnounter.generated.h"

class UEnemyDescriptor;

USTRUCT()
struct FFacilityGeneratorEnounter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> Enemies;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Difficulty;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval Diversity;
    
    FSD_API FFacilityGeneratorEnounter();
};

