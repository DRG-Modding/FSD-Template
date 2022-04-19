#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "SkinUnlock.generated.h"

class UItemSkin;
class UItemID;
class UPlayerCharacterID;

UCLASS(BlueprintType, EditInlineNew)
class USkinUnlock : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* OptionalItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OptionalCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkin* Skin;
    
public:
    USkinUnlock();
};

