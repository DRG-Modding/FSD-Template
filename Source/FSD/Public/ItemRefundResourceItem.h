#pragma once
#include "CoreMinimal.h"
#include "ItemRefundResourceItem.generated.h"

USTRUCT(BlueprintType)
struct FItemRefundResourceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    FSD_API FItemRefundResourceItem();
};

