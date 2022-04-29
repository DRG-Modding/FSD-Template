#pragma once
#include "CoreMinimal.h"
#include "ItemSkinOwners.generated.h"

class UItemID;

USTRUCT(BlueprintType)
struct FItemSkinOwners {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> Items;
    
    FSD_API FItemSkinOwners();
};

