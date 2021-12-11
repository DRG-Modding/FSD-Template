#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HeroInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHeroInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HeroName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* HeroIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* SmallHeroIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* HeroFullSizeImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HeroColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HeroShortDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HeroLongDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SwitchToMessage;
    
    FSD_API FHeroInfo();
};

