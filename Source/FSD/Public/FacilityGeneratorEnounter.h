#pragma once
#include "CoreMinimal.h"
#include "RandInterval.h"
#include "FacilityGeneratorEnounter.generated.h"

class UEnemyDescriptor;

USTRUCT()
struct FFacilityGeneratorEnounter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> Enemies;
    
    UPROPERTY(EditAnywhere)
    float Difficulty;
    
    UPROPERTY(EditAnywhere)
    FRandInterval Diversity;
    
    FSD_API FFacilityGeneratorEnounter();
};

