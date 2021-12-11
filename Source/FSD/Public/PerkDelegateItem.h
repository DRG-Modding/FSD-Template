#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerkDelegateItem.generated.h"

class UPerkAsset;
class UPlayerCharacterID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkDelegateItemOnPerkClaimed, UPerkAsset*, Perk, int32, ClaimedTier);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkDelegateItemOnPerkHighlighted, UPerkAsset*, Perk, bool, IsHighlighted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkDelegateItemOnPerkEquipped, UPerkAsset*, Perk, UPlayerCharacterID*, CharacterClass);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkDelegateItemOnPerkUnequipped, UPerkAsset*, Perk, UPlayerCharacterID*, CharacterClass);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkDelegateItemOnChargesUsedChanged, UPerkAsset*, Perk, int32, Value);

UCLASS()
class UPerkDelegateItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPerkDelegateItemOnPerkClaimed OnPerkClaimed;
    
    UPROPERTY(BlueprintAssignable)
    FPerkDelegateItemOnPerkEquipped OnPerkEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FPerkDelegateItemOnPerkUnequipped OnPerkUnequipped;
    
    UPROPERTY(BlueprintAssignable)
    FPerkDelegateItemOnPerkHighlighted OnPerkHighlighted;
    
    UPROPERTY(BlueprintAssignable)
    FPerkDelegateItemOnChargesUsedChanged OnChargesUsedChanged;
    
    UPerkDelegateItem();
};

