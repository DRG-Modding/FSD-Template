#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFHeightMaproperties.h"
#include "USDFHeightMapComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS()
class FSDENGINE_API UUSDFHeightMapComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFHeightMaproperties Properties;
    
    UPROPERTY(EditAnywhere)
    UTextureRenderTarget2D* HeightTexture;
    
    UUSDFHeightMapComponent();
};

