#pragma once
#include "CoreMinimal.h"
#include "VanitySlotStore.generated.h"

class UVanityItem;

USTRUCT(BlueprintType)
struct FVanitySlotStore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> VanityItems;
    
    FSD_API FVanitySlotStore();
};

