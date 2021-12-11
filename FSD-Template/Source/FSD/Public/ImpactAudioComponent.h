#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/AudioComponent.h"
#include "ImpactAudioComponent.generated.h"

class UHealthComponentBase;
class UImpactAudioComponent;
class USceneComponent;
class AActor;

UCLASS()
class UImpactAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName AudioParameterSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecelerationThreshold;
    
    UPROPERTY(EditAnywhere)
    bool ListenForDeath;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    static UImpactAudioComponent* AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, TSubclassOf<UImpactAudioComponent> ComponentClass);
    
    UImpactAudioComponent();
};

