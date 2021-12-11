#pragma once
#include "CoreMinimal.h"
#include "DebrisVeinResource.generated.h"

class UDebrisVeinComponent;

USTRUCT()
struct FDebrisVeinResource {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UDebrisVeinComponent* Debris;
    
    FSD_API FDebrisVeinResource();
};

