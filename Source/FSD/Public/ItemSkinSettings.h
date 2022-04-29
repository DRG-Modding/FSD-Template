#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSkinSettings.generated.h"

class UItemSkin;
class UItemSkinSet;

UCLASS(Blueprintable)
class FSD_API UItemSkinSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkinSet* StockSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemSkin*> LoadedSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemSkin*> FindableSkins;
    
public:
    UItemSkinSettings();
};

