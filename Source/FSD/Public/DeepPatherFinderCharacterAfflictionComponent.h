#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "DeepPatherFinderCharacterAfflictionComponent.generated.h"

class ADeepPathfinderCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeepPatherFinderCharacterAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ADeepPathfinderCharacter* Character;
    
public:
    UDeepPatherFinderCharacterAfflictionComponent();
};

