#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "EInputKeys.h"
#include "ShieldBoostUsable.generated.h"

class APlayerCharacter;

UCLASS()
class UShieldBoostUsable : public UInstantUsable {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterBoosted(APlayerCharacter* User, EInputKeys Key);
    
public:
    UShieldBoostUsable();
};

