#pragma once
#include "CoreMinimal.h"
#include "TemporaryBuff.h"
#include "StatTemporaryBuff.generated.h"

class UPawnStat;

UCLASS(Blueprintable)
class UStatTemporaryBuff : public UTemporaryBuff {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPawnStat*, float> ModifiedStats;
    
public:
    UStatTemporaryBuff();
};

