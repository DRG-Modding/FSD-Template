#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemRefundListItem.h"
#include "UObject/NoExportTypes.h"
#include "ItemRefundList.generated.h"

class UObject;

UCLASS()
class UItemRefundList : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool ResetListOnSave;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> Items;
    
    UPROPERTY(EditAnywhere)
    TMap<FGuid, FItemRefundListItem> ItemsToRefund;
    
public:
    UItemRefundList();
};

