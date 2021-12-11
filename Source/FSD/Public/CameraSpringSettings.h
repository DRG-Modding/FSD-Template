#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraSpringSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraSpringSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool SpringEnabled;
    
    UPROPERTY(EditAnywhere)
    float StepThreshold;
    
    UPROPERTY(EditAnywhere)
    FVector2D SpringExtend;
    
    UPROPERTY(EditAnywhere)
    float RetractStrength;
    
    UPROPERTY(EditAnywhere)
    float RetractDownReduction;
    
    UPROPERTY(EditAnywhere)
    bool ShowDebug;
    
    UPROPERTY(Transient)
    float LastSpeedZ;
    
    UPROPERTY(Transient)
    FVector LastLocation;
    
    UPROPERTY(Transient)
    FVector StartSpringLocation;
    
    UPROPERTY(Transient)
    bool bSpringInitialized;
    
    FSD_API FCameraSpringSettings();
};

