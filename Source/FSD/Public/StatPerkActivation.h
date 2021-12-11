#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "EPawnStatType.h"
#include "StatPerkActivation.generated.h"

class UPawnStat;

UCLASS(EditInlineNew)
class UStatPerkActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPawnStat* PawnStat;
    
    UPROPERTY(EditAnywhere)
    EPawnStatType StatType;
    
public:
    UStatPerkActivation();
};

