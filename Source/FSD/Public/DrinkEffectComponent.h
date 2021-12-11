#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrinkEffectComponent.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable)
class UDrinkEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BeerEffectDurationSeconds;
    
    UPROPERTY(EditAnywhere)
    bool AutoDestroy;
    
    UPROPERTY(BlueprintReadOnly)
    bool EffectIsActive;
    
    UFUNCTION(BlueprintCallable)
    void StopEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartEffect(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void OnChangedCharacter(APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass);
    
public:
    UDrinkEffectComponent();
};

