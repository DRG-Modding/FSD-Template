#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerkEquipEntry.generated.h"

USTRUCT(BlueprintType)
struct FPerkEquipEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid characterID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PerkIDs;
    
    FSD_API FPerkEquipEntry();
};

