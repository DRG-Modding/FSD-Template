#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CharacterShoutAfflictionEffect.generated.h"

class UDialogDataAsset;

UCLASS(Blueprintable)
class UCharacterShoutAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* Shout;
    
public:
    UCharacterShoutAfflictionEffect();
};

