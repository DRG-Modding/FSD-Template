#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "StandardItemUpgrade.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStandardItemUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPercentage;
    
public:
    UStandardItemUpgrade();
};

