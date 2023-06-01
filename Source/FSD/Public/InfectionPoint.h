#pragma once
#include "CoreMinimal.h"
#include "InfectionPoint.generated.h"

USTRUCT(BlueprintType)
struct FInfectionPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInfected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsVacuumed;
    
    FSD_API FInfectionPoint();
};

