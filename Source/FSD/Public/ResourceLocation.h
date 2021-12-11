#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ResourceLocation.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceLocation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    UResourceData* Resource;
    
    UPROPERTY()
    float BaseAmount;
    
    FSD_API FResourceLocation();
};

