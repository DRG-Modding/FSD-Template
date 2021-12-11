#pragma once
#include "CoreMinimal.h"
#include "FSDAudioComponent.h"
#include "MotionAudioController.generated.h"

UCLASS()
class UMotionAudioController : public UFSDAudioComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    float IncreseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float DecaySpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool DebugText;
    
    UPROPERTY(EditDefaultsOnly)
    bool Clamp;
    
    UPROPERTY(EditDefaultsOnly)
    bool Interp;
    
    UPROPERTY(EditDefaultsOnly)
    float AccelerationThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float SpeedThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool AutoPlayOnSpeedThreshold;
    
public:
    UMotionAudioController();
};

