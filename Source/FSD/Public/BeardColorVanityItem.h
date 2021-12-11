#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "BeardColorVanityItem.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UBeardColorVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* HairColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* EyebrowColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* MoustacheColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* SideburnColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BeardColor;
    
public:
    UBeardColorVanityItem();
};

