#pragma once
#include "CoreMinimal.h"
#include "UpgradeTier.generated.h"

class UItemUpgrade;

USTRUCT(BlueprintType)
struct FUpgradeTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredCharacterLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredPlayerRank;
    
    FSD_API FUpgradeTier();
};

