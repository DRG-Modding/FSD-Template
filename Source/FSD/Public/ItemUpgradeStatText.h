#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeStatText.generated.h"

USTRUCT(BlueprintType)
struct FItemUpgradeStatText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText StatText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsAdventageous;
    
    FSD_API FItemUpgradeStatText();
};

