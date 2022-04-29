#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "ResourceReward.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class UResourceReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
public:
    UResourceReward();
};

