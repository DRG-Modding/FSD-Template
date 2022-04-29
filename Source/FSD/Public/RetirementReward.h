#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "RetirementReward.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class URetirementReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
public:
    URetirementReward();
};

