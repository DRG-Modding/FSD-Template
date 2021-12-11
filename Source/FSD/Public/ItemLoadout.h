#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemLoadout.generated.h"

USTRUCT(BlueprintType)
struct FItemLoadout {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PrimaryWeapon;
    
    UPROPERTY()
    FGuid SecondaryWeapon;
    
    UPROPERTY()
    FGuid TraversalTool;
    
    UPROPERTY()
    FGuid ClassTool;
    
    UPROPERTY()
    FGuid Armor;
    
    UPROPERTY()
    FGuid Flare;
    
    UPROPERTY()
    FGuid MiningTool;
    
    UPROPERTY()
    FGuid Grenade;
    
    UPROPERTY()
    int32 IconIndex;
    
    FSD_API FItemLoadout();
};

