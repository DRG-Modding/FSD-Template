#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "VanityCollectionReward.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS(BlueprintType, EditInlineNew)
class UVanityCollectionReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UVanityItem*> vanityItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* OptionalCharacterID;
    
    UPROPERTY(EditAnywhere)
    bool UseContextAsTargetCharacter;
    
public:
    UVanityCollectionReward();
};

