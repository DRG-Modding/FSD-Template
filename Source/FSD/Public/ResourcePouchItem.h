#pragma once
#include "CoreMinimal.h"
#include "ResourcePouchItem.generated.h"

class UResourceData;

USTRUCT()
struct FResourcePouchItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UResourceData* Resource;
    
    FSD_API FResourcePouchItem();
};

