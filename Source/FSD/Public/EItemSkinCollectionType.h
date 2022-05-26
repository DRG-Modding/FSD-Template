#pragma once
#include "CoreMinimal.h"
#include "EItemSkinCollectionType.generated.h"

UENUM(BlueprintType)
enum class EItemSkinCollectionType : uint8 {
    PerCharacter,
    PerItem,
};

