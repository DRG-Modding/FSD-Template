#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FloatPerkActivation.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFloatPerkActivation : public UDataAsset {
    GENERATED_BODY()
public:
    UFloatPerkActivation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ActivatePerk(APlayerCharacter* Character, float Value);
    
};

