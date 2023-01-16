#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "VanityCollectionReward.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class UVanityCollectionReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> VanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OptionalCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseContextAsTargetCharacter;
    
public:
    UVanityCollectionReward();
};

