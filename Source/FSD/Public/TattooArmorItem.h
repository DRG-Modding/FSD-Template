#pragma once
#include "CoreMinimal.h"
#include "TattooArmorItem.generated.h"

class UVanityTattoo;

USTRUCT(BlueprintType)
struct FTattooArmorItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVanityTattoo* Tattoo;
    
    UPROPERTY(EditAnywhere)
    bool IsLeftArm;
    
    UPROPERTY(EditAnywhere)
    bool FlipTexture;
    
    FSD_API FTattooArmorItem();
};

