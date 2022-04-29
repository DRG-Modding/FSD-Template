#pragma once
#include "CoreMinimal.h"
#include "Formation.generated.h"

class UFormationData;

USTRUCT(BlueprintType)
struct FFormation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFormationData* FormationData;
    
    FSD_API FFormation();
};

