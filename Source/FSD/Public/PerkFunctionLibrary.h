#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPerkSlotType.h"
#include "EPerkUsageType.h"
#include "Templates/SubclassOf.h"
#include "PerkFunctionLibrary.generated.h"

class APlayerCharacter;
class UObject;
class UPerkAsset;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UPerkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerkFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SplitPerksByUsage(const TArray<UPerkAsset*>& perks, TArray<UPerkAsset*>& OutPassivePerks, TArray<UPerkAsset*>& OutActivePerks);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPerkAsset*> SortPerksByUsage(UPARAM(Ref) TArray<UPerkAsset*>& perks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RandomizePerkLoadout(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsPerkTierUnLocked(UObject* WorldContext, int32 Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRequiredPerkClaimsForTier(int32 Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static void GetPerkTierState(UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static void GetPerkEquipSlots(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<APlayerCharacter> InCharacterClass, int32& OutAvailableSlots, int32& OutUnavailableSlots, int32& OutPromotionLockedSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<EPerkSlotType> GetPerkEquipSlotLayout(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<APlayerCharacter> InCharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetOwnedPerksByType(UObject* WorldContext, EPerkUsageType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetOwnedPerks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHighestPerkTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPerkAsset*> GetAvailablePerks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAmountOfPurchasedPerks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatRichText(const FText& SourceText, bool UpperCase, const TMap<FString, FString> CharTagMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 CalculateClaimablePerkPoints(UObject* WorldContext);
    
};

