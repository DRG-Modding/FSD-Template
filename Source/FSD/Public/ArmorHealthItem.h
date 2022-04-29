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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HealthIsBreakPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideAffectedByAmorBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NewAffectedByArmorBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmorHealthSubItem> ArmorBones;
    
    FSD_API FArmorHealthItem();
};

