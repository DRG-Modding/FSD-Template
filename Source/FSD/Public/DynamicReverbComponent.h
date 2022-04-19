#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DynamicReverbComponent.generated.h"

class UAudioComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDynamicReverbComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeCaveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumCaveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallCaveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TunnelAmbienceFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TunnelAmbienceFadeOut;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TunnelSoundInstance;
    
public:
    UDynamicReverbComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TunnelTimerTriggered();
    
    UFUNCTION(BlueprintCallable)
    void TimerTriggered();
    
};

