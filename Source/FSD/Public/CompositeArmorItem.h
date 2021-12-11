#pragma once
#include "CoreMinimal.h"
#include "CompositeArmorItem.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCompositeArmorItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* Component;
    
    UPROPERTY(Transient)
    float Health;
    
    FSD_API FCompositeArmorItem();
};

