#pragma once
#include "CoreMinimal.h"
#include "ItemRefundResourceItem.h"
#include "UObject/NoExportTypes.h"
#include "ItemRefundListItem.generated.h"

USTRUCT(BlueprintType)
struct FItemRefundListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FItemRefundResourceItem> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditCost;
    
    FSD_API FItemRefundListItem();
};

