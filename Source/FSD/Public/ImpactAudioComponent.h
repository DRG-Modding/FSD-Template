#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "Templates/SubclassOf.h"
#include "ImpactAudioComponent.generated.h"

class AActor;
class UHealthComponentBase;
class UImpactAudioComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UImpactAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioParameterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

