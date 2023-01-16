#pragma once
#include "CoreMinimal.h"
#include "EPawnStatType.h"
#include "FloatPerkActivation.h"
#include "StatPerkActivation.generated.h"

class UPawnStat;

UCLASS(Blueprintable, EditInlineNew)
class UStatPerkActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* PawnStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType StatType;
    
public:
    UStatPerkActivation();
};

