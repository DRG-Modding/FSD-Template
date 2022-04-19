#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoilgunAfflictionEntry.generated.h"

class UStatusEffect;
class UStatusEffectsComponent;

USTRUCT()
struct FCoilgunAfflictionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> PushedAfflictions;
    
    UPROPERTY(Export, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* Target;
    
    FSD_API FCoilgunAfflictionEntry();
};

