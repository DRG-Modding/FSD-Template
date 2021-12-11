#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ItemUpgradeCategory.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UItemUpgradeCategory : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CategoryDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* CategoryIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor CategoryTint;
    
public:
    UItemUpgradeCategory();
};

