#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ResourcesSave.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourcesSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGuid, float> OwnedResources;
    
private:
    UPROPERTY()
    TMap<UResourceData*, float> Resources;
    
public:
    FSD_API FResourcesSave();
};

