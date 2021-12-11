#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewStatus.h"
#include "GearStatEntry.generated.h"

USTRUCT(BlueprintType)
struct FGearStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText Value;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText BaseValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText UpgradeValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EItemPreviewStatus PreviewStatus;
    
    FSD_API FGearStatEntry();
};

