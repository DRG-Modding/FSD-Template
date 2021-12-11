#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSettings.generated.h"

class UItemID;
class UItemData;

UCLASS()
class UItemSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UItemID*, UItemData*> ItemData;
    
public:
    UItemSettings();
};

