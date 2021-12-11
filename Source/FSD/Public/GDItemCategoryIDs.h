#pragma once
#include "CoreMinimal.h"
#include "GDItemCategoryIDs.generated.h"

class UCategoryID;

USTRUCT(BlueprintType)
struct FGDItemCategoryIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* OverclockID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* ItemSkinID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* VanityID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* PickaxePartID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* WeaponID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* CraftingID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* ForgeID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCategoryID* BoscoSkinID;
    
    FSD_API FGDItemCategoryIDs();
};

