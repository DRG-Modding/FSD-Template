#pragma once
#include "CoreMinimal.h"
#include "SpecialChanceEventItem.generated.h"

class USpecialEvent;

USTRUCT(BlueprintType)
struct FSpecialChanceEventItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSpawnInDeepDive;
    
    FSD_API FSpecialChanceEventItem();
};

