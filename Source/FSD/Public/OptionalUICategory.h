#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "OptionalUICategory.generated.h"

class UOptionalUICategory;
class UObject;

UCLASS(BlueprintType)
class UOptionalUICategory : public UDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVisibilityChanged, UOptionalUICategory*, Category, bool, IsVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
public:
    UOptionalUICategory();
    UFUNCTION(BlueprintCallable)
    void SetVisible(UObject* WorldContext, bool IsCategoryVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible(UObject* WorldContext) const;
    
};

