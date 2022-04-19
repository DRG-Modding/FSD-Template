#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/AudioComponent.h"
#include "ImpactAudioComponent.generated.h"

class USceneComponent;
class UHealthComponentBase;
class UImpactAudioComponent;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UImpactAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioParameterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DecelerationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ListenForDeath;
    
public:
    UImpactAudioComponent();
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    static UImpactAudioComponent* AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, TSubclassOf<UImpactAudioComponent> ComponentClass);
    
};

