#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "EDrinkableAlcoholStrength.h"
#include "DrinkableDataAsset.generated.h"

class APlayerController;
class ADrinkableItem;
class UTexture2D;
class ADrinkableActor;
class UDrinkableDataAsset;
class UDialogDataAsset;
class UMissionStat;
class UTemporaryBuff;
class UDrinkEffectComponent;
class UResourceData;
class UObject;
class APlayerCharacter;

UCLASS(Blueprintable)
class UDrinkableDataAsset : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DrinkableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DrinkableDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrinkablePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DrinkableIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParticipatesInFreeBeerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrinkableAlcoholStrength AlcoholStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* SupporterEdition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayFireworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* StatConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* StatRoundOrdered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADrinkableActor> DrinkableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADrinkableItem> DrinkableItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OrderCheeringShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DrinkSaluteShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTemporaryBuff* buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDrinkEffectComponent> DrinkEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, int32> UnlockCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, int32> PurchaseCost;
    
    UDrinkableDataAsset();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool TryUnlockSpecialDrinks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool TryUnlockDrink(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool TryPurchaseDrink(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void OnRoundOrdered(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MustBeUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsUnlocked(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsDrinkFree(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSupporterEdition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetDrinkableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UDrinkableDataAsset* GetDrinkableEdition(UObject* WorldContext, APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool AreSpecialDrinksUnlocked(UObject* WorldContext);
    
};

