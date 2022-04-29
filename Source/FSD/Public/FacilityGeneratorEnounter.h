#pragma once
#include "CoreMinimal.h"
#include "RandInterval.h"
#include "FacilityGeneratorEnounter.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FFacilityGeneratorEnounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> Enemies;
    
    UPROPERTY(EditAnywhere)
    float Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval Diversity;
    
    FSD_API FFacilityGeneratorEnounter();
};

