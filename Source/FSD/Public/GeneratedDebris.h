#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebris.generated.h"

class UDebrisBase;
class UObject;

USTRUCT(BlueprintType)
struct FGeneratedDebris {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UDebrisBase*, UObject*> Debris;
    
    UPROPERTY(Transient)
    bool IsValid;
    
    FSD_API FGeneratedDebris();
};

