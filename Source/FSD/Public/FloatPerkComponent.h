#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FloatPerkComponent.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UFloatPerkComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float FloatValue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* PlayerCharacter;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnInitialized();
    
public:
    UFloatPerkComponent();
};

