#pragma once
#include "CoreMinimal.h"
#include "GemResourceCreator.h"
#include "DistributedGemResourceCreator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDistributedGemResourceCreator : public UGemResourceCreator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenGems;
    
public:
    UDistributedGemResourceCreator();
};

