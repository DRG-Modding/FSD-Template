#pragma once
#include "CoreMinimal.h"
#include "FloatPerkEffect.h"
#include "FloatPerkRank.h"
#include "PerkAsset.h"
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
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    float GetPerkValue(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastTierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
    
};

