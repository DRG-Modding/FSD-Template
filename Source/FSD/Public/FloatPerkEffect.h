#pragma once
#include "CoreMinimal.h"
#include "FloatPerkRankValue.h"
#include "FloatPerkEffect.generated.h"

class UFloatPerkActivation;

USTRUCT(BlueprintType)
struct FFloatPerkEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatPerkActivation* PerkActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormattedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatPerkRankValue> RankValues;
    
    FSD_API FFloatPerkEffect();
};

