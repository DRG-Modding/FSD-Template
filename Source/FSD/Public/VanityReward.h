#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "VanityReward.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class UVanityReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityItem* VanityItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OptionalCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseContextAsTargetCharacter;
    
public:
    UVanityReward();
};

