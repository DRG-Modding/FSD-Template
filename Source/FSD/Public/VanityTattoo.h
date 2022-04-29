#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "VanityTattoo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UVanityTattoo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(EditAnywhere)
    float RotationAngle;
    
    UPROPERTY(EditAnywhere)
    float ScaleBase;
    
    UPROPERTY(EditAnywhere)
    float ScaleStretch;
    
    UVanityTattoo();
};

