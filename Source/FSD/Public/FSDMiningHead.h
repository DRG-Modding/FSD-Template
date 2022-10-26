#pragma once
#include "CoreMinimal.h"
#include "DropPod.h"
#include "FSDMiningHead.generated.h"

class UResourceBank;

UCLASS(Blueprintable)
class FSD_API AFSDMiningHead : public ADropPod {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResourceBank* ResourceBank;
    
public:
    AFSDMiningHead();
};

