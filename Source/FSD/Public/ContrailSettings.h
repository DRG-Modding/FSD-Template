#pragma once
#include "CoreMinimal.h"
#include "ContrailSettings.generated.h"

USTRUCT(BlueprintType)
struct FContrailSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere, Transient)
    float HalfLenght;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hellfire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Electric;
    
    FSD_API FContrailSettings();
};

