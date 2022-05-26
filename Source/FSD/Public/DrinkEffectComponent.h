#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrinkEffectComponent.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrinkEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeerEffectDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EffectIsActive;
    
public:
    UDrinkEffectComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void StopEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartEffect(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void OnChangedCharacter(APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass);
    
};

