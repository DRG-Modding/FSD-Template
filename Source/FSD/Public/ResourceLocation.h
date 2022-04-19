#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ResourceLocation.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float BaseAmount;
    
    FSD_API FResourceLocation();
};

