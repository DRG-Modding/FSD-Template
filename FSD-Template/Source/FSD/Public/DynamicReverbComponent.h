#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DynamicReverbComponent.generated.h"

class UAudioComponent;

UCLASS()
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
    
    UPROPERTY(Export, Transient)
    UAudioComponent* TunnelSoundInstance;
    
    UFUNCTION(BlueprintCallable)
    void TunnelTimerTriggered();
    
    UFUNCTION(BlueprintCallable)
    void TimerTriggered();
    
public:
    UDynamicReverbComponent();
};

