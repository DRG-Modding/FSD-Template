#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EPerkHUDActivationLocation.h"
#include "EPerkUsageType.h"
#include "EPerkTierState.h"
#include "PerkAsset.generated.h"

class UPerkHUDActivationWidget;
class UObject;
class UTexture2D;
class UDialogDataAsset;
class UPerkLogic;
class UPerkHUDIconWidget;
class APlayerController;
class UPlayerCharacterID;
class UPerkAsset;
class UPerkDelegateItem;

UCLASS(Abstract, BlueprintType)
class UPerkAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsEquippable;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ShoutOnUseCharge;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UPerkLogic>> PerkLogicClasses;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UPerkHUDIconWidget> HudIconWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UPerkHUDActivationWidget>> HudActivationWidgets;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUseCharges;
    
    UPROPERTY(EditAnywhere)
    float CoolDownBetweenUse;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsHighlighted;
    
public:
    UFUNCTION(BlueprintCallable)
    bool UseCharge(APlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool Unequip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlighted(UObject* WorldContext, bool IsHighlighted);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetCharacterPerks(UObject* WorldContext, UPlayerCharacterID* characterID, const TArray<UPerkAsset*>& perks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsageType(EPerkUsageType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkAvailableInTier(int32 Tier) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerkTierState GetStateAtTier(UObject* WorldContext, int32 Tier) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingUseCharges(APlayerController* PlayerController) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankTier(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRankDescription(int32 Rank) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankCost(int32 Rank) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRankAtTier(const int32 Tier, int32& Rank) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUseCharges(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPerkHUDIconWidget> GetHudIconWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UPerkHUDActivationWidget>> GetHudActivationWidgets(EPerkHUDActivationLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkDelegateItem* GetDelegates(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRank(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargesUsed(APlayerController* PlayerController) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAdditionalRankDescription(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable)
    bool Equip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCharge(APlayerController* PlayerController) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool BuyPerkAtTier(UObject* WorldContext, int32 Tier);
    
public:
    UPerkAsset();
};

