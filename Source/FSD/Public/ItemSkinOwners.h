#pragma once
#include "CoreMinimal.h"
#include "ItemSkinOwners.generated.h"

class UItemID;

USTRUCT()
struct FItemSkinOwners {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UItemID*> Items;
    
    FSD_API FItemSkinOwners();
};

