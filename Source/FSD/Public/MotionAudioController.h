#pragma once
#include "CoreMinimal.h"
#include "FSDAudioComponent.h"
#include "MotionAudioController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMotionAudioController : public UFSDAudioComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float IncreseSpeed;
    
    UPROPERTY(EditAnywhere)
    float DecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Interp;
    
    UPROPERTY(EditAnywhere)
    float AccelerationThreshold;
    
    UPROPERTY(EditAnywhere)
    float SpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPlayOnSpeedThreshold;
    
public:
    UMotionAudioController();
};

