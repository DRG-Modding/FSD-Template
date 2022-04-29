#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "RecoilSettings.generated.h"

USTRUCT(BlueprintType)
struct FRecoilSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RecoilRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RecoilPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RecoilYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRecoilDown;
    
    UPROPERTY(EditAnywhere)
    float SpringStiffness;
    
    UPROPERTY(EditAnywhere)
    float CriticalDampening;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    FSD_API FRecoilSettings();
};

