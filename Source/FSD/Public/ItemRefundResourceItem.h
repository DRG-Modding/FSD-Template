#pragma once
#include "CoreMinimal.h"
#include "ItemRefundResourceItem.generated.h"

USTRUCT(BlueprintType)
struct FItemRefundResourceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    float Amount;
    
    FSD_API FItemRefundResourceItem();
};

