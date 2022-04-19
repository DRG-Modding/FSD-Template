#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSkinSettings.generated.h"

class UItemSkinSet;
class UItemSkin;

UCLASS()
class FSD_API UItemSkinSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkinSet* StockSet;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemSkin*> LoadedSkins;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemSkin*> FindableSkins;
    
public:
    UItemSkinSettings();
};

