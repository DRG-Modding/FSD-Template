#pragma once
#include "CoreMinimal.h"
#include "PerkEquipEntry.h"
#include "CharacterPerksSave.generated.h"

USTRUCT(BlueprintType)
struct FCharacterPerksSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkEquipEntry> CharacterPerks;
    
public:
    FSD_API FCharacterPerksSave();
};

