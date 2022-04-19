#pragma once
#include "CoreMinimal.h"
#include "VanityMasterySettings.generated.h"

USTRUCT(BlueprintType)
struct FVanityMasterySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMasteryLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP_RequiredPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP_ForCreditSpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP_ForMineralSpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FashionitesLevelUpReward;
    
    FSD_API FVanityMasterySettings();
};

