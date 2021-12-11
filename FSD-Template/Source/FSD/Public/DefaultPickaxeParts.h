#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.h"
#include "DefaultPickaxeParts.generated.h"

class UPickaxePart;

USTRUCT(BlueprintType)
struct FDefaultPickaxeParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EPickaxePartLocation, UPickaxePart*> Parts;
    
public:
    FSD_API FDefaultPickaxeParts();
};

