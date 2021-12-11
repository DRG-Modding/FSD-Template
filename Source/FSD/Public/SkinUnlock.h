#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "SkinUnlock.generated.h"

class UItemID;
class UPlayerCharacterID;
class UItemSkin;

UCLASS(BlueprintType, EditInlineNew)
class USkinUnlock : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* OptionalItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* OptionalCharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemSkin* Skin;
    
public:
    USkinUnlock();
};

