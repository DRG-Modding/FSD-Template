#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSettings.generated.h"

class UItemRefundList;
class UItemID;
class UItemData;

UCLASS(Blueprintable)
class UItemSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemRefundList*> ItemRefunds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UItemID*, UItemData*> ItemData;
    
public:
    UItemSettings();
};

