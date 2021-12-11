#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CharacterShoutAfflictionEffect.generated.h"

class UDialogDataAsset;

UCLASS()
class UCharacterShoutAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* Shout;
    
public:
    UCharacterShoutAfflictionEffect();
};

