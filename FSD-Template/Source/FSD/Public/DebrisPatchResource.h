#pragma once
#include "CoreMinimal.h"
#include "DebrisPatchResource.generated.h"

class UDebrisPatchComponent;

USTRUCT()
struct FDebrisPatchResource {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UDebrisPatchComponent* Debris;
    
    FSD_API FDebrisPatchResource();
};

