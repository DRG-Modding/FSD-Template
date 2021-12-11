#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionItem.generated.h"

class UAfflictionEffect;

USTRUCT(BlueprintType)
struct FPawnAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UAfflictionEffect*> Afflictions;
    
    FSD_API FPawnAfflictionItem();
};

