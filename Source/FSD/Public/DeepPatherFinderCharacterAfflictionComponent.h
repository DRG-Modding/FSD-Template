#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "DeepPatherFinderCharacterAfflictionComponent.generated.h"

class ADeepPathfinderCharacter;

UCLASS()
class UDeepPatherFinderCharacterAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ADeepPathfinderCharacter* Character;
    
public:
    UDeepPatherFinderCharacterAfflictionComponent();
};

