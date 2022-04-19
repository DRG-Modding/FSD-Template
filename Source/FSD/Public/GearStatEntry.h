#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewStatus.h"
#include "GearStatEntry.generated.h"

USTRUCT(BlueprintType)
struct FGearStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText Value;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText BaseValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText UpgradeValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EItemPreviewStatus PreviewStatus;
    
    FSD_API FGearStatEntry();
};

