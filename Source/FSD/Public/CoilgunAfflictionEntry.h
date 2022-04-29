#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoilgunAfflictionEntry.generated.h"

class UStatusEffect;
class UStatusEffectsComponent;

USTRUCT(BlueprintType)
struct FCoilgunAfflictionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> PushedAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* Target;
    
    FSD_API FCoilgunAfflictionEntry();
};

