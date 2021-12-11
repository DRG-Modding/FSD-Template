#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFOnionProperties.h"
#include "SDFOnion.generated.h"

UCLASS()
class USDFOnion : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFOnionProperties Properties;
    
    UPROPERTY()
    USDFBase* Argument;
    
    USDFOnion();
};

