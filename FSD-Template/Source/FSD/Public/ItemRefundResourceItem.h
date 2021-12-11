#pragma once
#include "CoreMinimal.h"
#include "ItemRefundResourceItem.generated.h"

USTRUCT(BlueprintType)
struct FItemRefundResourceItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Name;
    
    UPROPERTY(VisibleAnywhere)
    float Amount;
    
    FSD_API FItemRefundResourceItem();
};

