#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebris.generated.h"

class UDebrisBase;
class UObject;

USTRUCT(BlueprintType)
struct FGeneratedDebris {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDebrisBase*, UObject*> Debris;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    FSD_API FGeneratedDebris();
};

