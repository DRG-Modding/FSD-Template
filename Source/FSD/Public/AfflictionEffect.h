#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AfflictionEffect.generated.h"

class UPawnAfflictionComponent;

UCLASS(Blueprintable)
class UAfflictionEffect : public UObject {
    GENERATED_BODY()
public:
    UAfflictionEffect();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldInstantiate() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndEffect(UPawnAfflictionComponent* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginEffect(UPawnAfflictionComponent* Target);
    
};

