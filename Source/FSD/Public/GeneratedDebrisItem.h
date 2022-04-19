#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebrisItem.generated.h"

class UDebrisBase;
class UObject;

USTRUCT(BlueprintType)
struct FGeneratedDebrisItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UDebrisBase* Debris;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* Influencer;
    
    FSD_API FGeneratedDebrisItem();
};

