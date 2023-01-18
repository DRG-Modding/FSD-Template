#pragma once
#include "CoreMinimal.h"
#include "RuntimeSpawnedDebris.generated.h"

class UDebrisInstances;
class UDebrisMesh;

USTRUCT(BlueprintType)
struct FRuntimeSpawnedDebris {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDebrisInstances*> DebrisInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisMesh* DebrisMesh;
    
    FSD_API FRuntimeSpawnedDebris();
};

