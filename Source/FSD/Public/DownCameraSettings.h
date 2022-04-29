#pragma once
#include "CoreMinimal.h"
#include "DownCameraSettings.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FDownCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerCharacter> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

