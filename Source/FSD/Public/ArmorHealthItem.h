#pragma once
#include "CoreMinimal.h"
#include "ArmorHealthSubItem.h"
#include "ArmorHealthItem.generated.h"

USTRUCT(BlueprintType)
struct FArmorHealthItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 MaterialIndex;
    
    UPROPERTY(EditAnywhere)
    bool HealthIsBreakPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FArmorHealthSubItem> ArmorBones;
    
    FSD_API FArmorHealthItem();
};

