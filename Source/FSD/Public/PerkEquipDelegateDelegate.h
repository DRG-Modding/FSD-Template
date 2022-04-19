#pragma once
#include "CoreMinimal.h"
#include "PerkEquipDelegateDelegate.generated.h"

class UPerkAsset;
class UPlayerCharacterID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerkEquipDelegate, UPerkAsset*, Perk, UPlayerCharacterID*, CharacterClass);

