#pragma once
#include "CoreMinimal.h"
#include "PerkClaimEntry.h"
#include "PerkClaimsSave.generated.h"

USTRUCT(BlueprintType)
struct FSD_API FPerkClaimsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkClaimEntry> PerkEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasResetPerks2;
    
public:
    FPerkClaimsSave();
};

