#pragma once
#include "CoreMinimal.h"
#include "EUpgradeCalucationType.h"
#include "EItemPreviewStatus.h"
#include "UpgradeValues.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float UpgradedValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float UpgradedPercentageValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float OldUpgradedValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float OldUpgradedPercentageValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUpgradeCalucationType CalculationType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EItemPreviewStatus PreviewStatus;
    
    FSD_API FUpgradeValues();
};

