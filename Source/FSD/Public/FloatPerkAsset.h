#pragma once
#include "CoreMinimal.h"
#include "PerkAsset.h"
#include "FloatPerkRank.h"
#include "FloatPerkEffect.h"
#include "FloatPerkAsset.generated.h"

class UFloatPerkAsset;
class UObject;

UCLASS(Blueprintable)
class UFloatPerkAsset : public UPerkAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatPerkRank> Ranks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatPerkEffect> Effects;
    
public:
    UFloatPerkAsset();
    UFUNCTION(BlueprintPure)
    float GetPerkValue(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    float GetLastTierValue() const;
    
    UFUNCTION(BlueprintPure)
    static float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
    
};

