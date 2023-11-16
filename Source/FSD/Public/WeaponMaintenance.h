#pragma once
#include "CoreMinimal.h"
#include "WeaponMaintenanceEntry.h"
#include "WeaponMaintenance.generated.h"

USTRUCT(BlueprintType)
struct FSD_API FWeaponMaintenance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponMaintenanceEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevel;
    
public:
    FWeaponMaintenance();
};

