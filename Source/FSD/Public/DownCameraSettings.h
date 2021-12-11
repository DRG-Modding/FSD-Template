#pragma once
#include "CoreMinimal.h"
#include "DownCameraSettings.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FDownCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerCharacter> Target;
    
    UPROPERTY(Transient)
    int32 TargetIndex;
    
protected:
    UPROPERTY(EditAnywhere)
    float MinPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(EditAnywhere)
    float SmoothSpeed;
    
public:
    FSD_API FDownCameraSettings();
};

