#pragma once
#include "CoreMinimal.h"
#include "PerkAsset.h"
#include "FloatPerkRank.h"
#include "FloatPerkEffect.h"
#include "FloatPerkAsset.generated.h"

class UObject;
class UFloatPerkAsset;

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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPerkValue(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastTierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
    
};

