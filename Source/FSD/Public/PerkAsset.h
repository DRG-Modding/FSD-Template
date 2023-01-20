#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EPerkHUDActivationLocation.h"
#include "EPerkTierState.h"
#include "EPerkUsageType.h"
#include "Templates/SubclassOf.h"
#include "PerkAsset.generated.h"

class APlayerController;
class UDialogDataAsset;
class UObject;
class UPerkAsset;
class UPerkDelegateItem;
class UPerkHUDActivationWidget;
class UPerkHUDIconWidget;
class UPerkLogic;
class UPlayerCharacterID;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FSD_API UPerkAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOnUseCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPerkLogic>> PerkLogicClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPerkHUDIconWidget> HudIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPerkHUDActivationWidget>> HudActivationWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUseCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownBetweenUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHighlighted;
    
public:
    UPerkAsset();
    UFUNCTION(BlueprintCallable)
    bool UseCharge(APlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Unequip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SetHighlighted(UObject* WorldContext, bool IsHighlighted);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetCharacterPerks(UObject* WorldContext, UPlayerCharacterID* characterID, const TArray<UPerkAsset*>& perks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsageType(EPerkUsageType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkAvailableInTier(int32 Tier) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsEquippedBy(UObject* WorldContext, UPlayerCharacterID* characterID) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseCoolDownTimeLeft(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseCoolDownProgress(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseCoolDownDuration(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerkUsageType GetUsageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    EPerkTierState GetStateAtTier(UObject* WorldContext, int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingUseCharges(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankTier(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRankDescription(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankCost(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRankAtTier(const int32 Tier, int32& Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUseCharges(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPerkHUDIconWidget> GetHudIconWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UPerkHUDActivationWidget>> GetHudActivationWidgets(EPerkHUDActivationLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UPerkDelegateItem* GetDelegates(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetCurrentRank(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargesUsed(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAdditionalRankDescription(int32 Rank) const;
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Equip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void CheatSetCurrentRank(UObject* WorldContext, int32 InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCharge(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool BuyPerkAtTier(UObject* WorldContext, int32 Tier);
    
};

