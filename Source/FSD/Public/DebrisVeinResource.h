#pragma once
#include "CoreMinimal.h"
#include "DebrisVeinResource.generated.h"

class UDebrisVeinComponent;

USTRUCT(BlueprintType)
struct FDebrisVeinResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDebrisVeinComponent* Debris;
    
    FSD_API FDebrisVeinResource();
};

