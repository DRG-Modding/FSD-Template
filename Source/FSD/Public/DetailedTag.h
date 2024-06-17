#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavableDataAsset.h"
#include "DetailedTag.generated.h"

class UDetailedTagCategory;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FSD_API UDetailedTag : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TagIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TagColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortingPriority;
    
public:
    UDetailedTag();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTagName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTagIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetTagColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDetailedTagCategory* GetTagCategory() const;
    
};

