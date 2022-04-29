#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DynamicReverbComponent.generated.h"

class UAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDynamicReverbComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LargeCaveValue;
    
    UPROPERTY(EditAnywhere)
    float MediumCaveValue;
    
    UPROPERTY(EditAnywhere)
    float SmallCaveValue;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float TunnelAmbienceFadeIn;
    
    UPROPERTY(EditAnywhere)
    float TunnelAmbienceFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TunnelSoundInstance;
    
public:
    UDynamicReverbComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TunnelTimerTriggered();
    
    UFUNCTION(BlueprintCallable)
    void TimerTriggered();
    
};

