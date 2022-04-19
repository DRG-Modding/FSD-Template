#pragma once
#include "CoreMinimal.h"
#include "ECampaignType.generated.h"

UENUM(BlueprintType)
enum class ECampaignType : uint8 {
    Normal,
    Weekly,
    MatrixCoreHunt,
};

