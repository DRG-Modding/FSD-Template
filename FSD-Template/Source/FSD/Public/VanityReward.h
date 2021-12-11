#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "VanityReward.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS(BlueprintType, EditInlineNew)
class UVanityReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVanityItem* VanityItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* OptionalCharacterID;
    
    UPROPERTY(EditAnywhere)
    bool UseContextAsTargetCharacter;
    
public:
    UVanityReward();
};

