#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSkinSettings.generated.h"

class UItemSkin;
class UItemSkinSet;

UCLASS()
class FSD_API UItemSkinSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UItemSkinSet* StockSet;
    
    UPROPERTY(Transient)
    TArray<UItemSkin*> LoadedSkins;
    
public:
    UItemSkinSettings();
};

