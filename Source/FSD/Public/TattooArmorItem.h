#pragma once
#include "CoreMinimal.h"
#include "TattooArmorItem.generated.h"

class UVanityTattoo;

USTRUCT(BlueprintType)
struct FTattooArmorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityTattoo* Tattoo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLeftArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlipTexture;
    
    FSD_API FTattooArmorItem();
};

