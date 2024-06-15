#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavableDataAsset.h"
#include "DetailedTagCategory.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UDetailedTagCategory : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CategoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CategoryColor;
    
public:
    UDetailedTagCategory();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCategoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCategoryIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCategoryColor() const;
    
};

