#pragma once
#include "CoreMinimal.h"
#include "TemporaryBuff.h"
#include "StatTemporaryBuff.generated.h"

class UPawnStat;

UCLASS()
class UStatTemporaryBuff : public UTemporaryBuff {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<UPawnStat*, float> ModifiedStats;
    
public:
    UStatTemporaryBuff();
};

