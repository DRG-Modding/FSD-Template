#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "RecoilSettings.generated.h"

USTRUCT(BlueprintType)
struct FRecoilSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandRange RecoilRoll;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandRange RecoilPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandRange RecoilYaw;
    
    UPROPERTY(EditAnywhere)
    bool CanRecoilDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpringStiffness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CriticalDampening;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mass;
    
    FSD_API FRecoilSettings();
};

