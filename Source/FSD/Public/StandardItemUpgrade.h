#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "StandardItemUpgrade.generated.h"

UCLASS(Abstract, EditInlineNew)
class UStandardItemUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Amount;
    
    UPROPERTY(EditAnywhere)
    bool IsPercentage;
    
public:
    UStandardItemUpgrade();
};

