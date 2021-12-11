#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFHeightMaproperties.h"
#include "SDFHeightMap.generated.h"

UCLASS()
class FSDENGINE_API USDFHeightMap : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFHeightMaproperties Properties;
    
    USDFHeightMap();
};

