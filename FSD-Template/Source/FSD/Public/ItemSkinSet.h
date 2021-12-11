#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSkinSet.generated.h"

UCLASS(BlueprintType)
class UItemSkinSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ColorIsLockedToSet;
    
    UItemSkinSet();
};

