#pragma once
#include "CoreMinimal.h"
#include "FloatPerkRankValue.h"
#include "FloatPerkEffect.generated.h"

class UFloatPerkActivation;

USTRUCT(BlueprintType)
struct FFloatPerkEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UFloatPerkActivation* PerkActivation;
    
    UPROPERTY(EditAnywhere)
    FText FormattedDescription;
    
    UPROPERTY(EditAnywhere)
    TArray<FFloatPerkRankValue> RankValues;
    
    FSD_API FFloatPerkEffect();
};

