#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemUpgradeSelection.generated.h"

USTRUCT(BlueprintType)
struct FItemUpgradeSelection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid WeaponID;
    
    UPROPERTY()
    TArray<FGuid> EquippedUpgrades;
    
    UPROPERTY()
    TArray<FGuid> PermanentUpgrades;
    
    UPROPERTY()
    FGuid EquippedOverclock;
    
    UPROPERTY()
    TArray<FGuid> EquippedSkins;
    
    UPROPERTY()
    bool OverclockingUnlocked;
    
private:
    UPROPERTY()
    FGuid EquippedSkinColor;
    
    UPROPERTY()
    FGuid EquippedSkinMesh;
    
public:
    FSD_API FItemUpgradeSelection();
};

