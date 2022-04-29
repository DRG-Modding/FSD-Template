#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PureTextReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPureTextReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
public:
    UPureTextReward();
};

