#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "EInputKeys.h"
#include "ShieldBoostUsable.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShieldBoostUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UShieldBoostUsable();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterBoosted(APlayerCharacter* User, EInputKeys Key);
    
};

