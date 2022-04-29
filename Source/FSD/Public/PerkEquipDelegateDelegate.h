#pragma once
#include "CoreMinimal.h"
#include "PerkEquipDelegateDelegate.generated.h"

class UPlayerCharacterID;
class UPerkAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkEquipDelegate, UPerkAsset*, Perk, UPlayerCharacterID*, CharacterClass);

