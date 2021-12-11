#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemRefundResourceItem.h"
#include "ItemRefundListItem.generated.h"

USTRUCT(BlueprintType)
struct FItemRefundListItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Name;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, FItemRefundResourceItem> Resources;
    
    UPROPERTY(VisibleAnywhere)
    float CreditCost;
    
    FSD_API FItemRefundListItem();
};

