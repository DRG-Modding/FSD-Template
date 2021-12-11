#pragma once
#include "CoreMinimal.h"
#include "Formation.generated.h"

class UFormationData;

USTRUCT()
struct FFormation {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UFormationData* FormationData;
    
    FSD_API FFormation();
};

