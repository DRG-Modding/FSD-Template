#pragma once
#include "CoreMinimal.h"
#include "GeneratedDebris.generated.h"

class UObject;
class UDebrisBase;

USTRUCT(BlueprintType)
struct FGeneratedDebris {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDebrisBase*, UObject*> Debris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    FSD_API FGeneratedDebris();
};

