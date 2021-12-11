#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewStatus.h"
#include "EUpgradeCalucationType.h"
#include "UpgradeValues.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float UpgradedValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float UpgradedPercentageValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float OldUpgradedValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float OldUpgradedPercentageValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadOnly)
    EUpgradeCalucationType CalculationType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EItemPreviewStatus PreviewStatus;
    
    FSD_API FUpgradeValues();
};

