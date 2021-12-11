#pragma once
#include "CoreMinimal.h"
#include "PerkAsset.h"
#include "FloatPerkRank.h"
#include "FloatPerkEffect.h"
#include "FloatPerkAsset.generated.h"

class UFloatPerkAsset;
class UObject;

UCLASS()
class UFloatPerkAsset : public UPerkAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FFloatPerkRank> Ranks;
    
    UPROPERTY(EditAnywhere)
    TArray<FFloatPerkEffect> Effects;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPerkValue(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastTierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
    
    UFloatPerkAsset();
};

