#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewStatus.h"
#include "EUpgradeCalucationType.h"
#include "UpgradeValues.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeValues {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float BaseValue;
    
    UPROPERTY(EditAnywhere, Transient)
    float UpgradedValue;
    
    UPROPERTY(EditAnywhere, Transient)
    float UpgradedPercentageValue;
    
    UPROPERTY(EditAnywhere, Transient)
    float OldUpgradedValue;
    
    UPROPERTY(EditAnywhere, Transient)
    float OldUpgradedPercentageValue;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpgradeCalucationType CalculationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EItemPreviewStatus PreviewStatus;
    
    FSD_API FUpgradeValues();
};

