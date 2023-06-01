#pragma once
#include "CoreMinimal.h"
#include "CharacterPerksSave.h"
#include "CharacterVanityLoadout.h"
#include "ItemLoadout.h"
#include "UpgradeLoadout.h"
#include "LoadoutCopy.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutCopy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemLoadout ItemLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpgradeLoadout UpgradeLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPerksSave PerkLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterVanityLoadout VanityLoadout;
    
    FSD_API FLoadoutCopy();
};

