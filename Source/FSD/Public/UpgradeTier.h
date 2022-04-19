#pragma once
#include "CoreMinimal.h"
#include "UpgradeTier.generated.h"

class UItemUpgrade;

USTRUCT(BlueprintType)
struct FUpgradeTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCharacterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayerRank;
    
    FSD_API FUpgradeTier();
};

