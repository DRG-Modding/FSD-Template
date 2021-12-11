#pragma once
#include "CoreMinimal.h"
#include "DropPod.h"
#include "FSDMiningHead.generated.h"

class UResourceBank;

UCLASS()
class AFSDMiningHead : public ADropPod {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UResourceBank* ResourceBank;
    
public:
    AFSDMiningHead();
};

