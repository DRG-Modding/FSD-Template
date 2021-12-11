#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebrisItem.generated.h"

class UDebrisBase;
class UObject;

USTRUCT(BlueprintType)
struct FGeneratedDebrisItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDebrisBase* Debris;
    
    UPROPERTY()
    UObject* Influencer;
    
    FSD_API FGeneratedDebrisItem();
};

