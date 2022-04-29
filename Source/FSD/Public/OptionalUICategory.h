#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "OptionalUICategory.generated.h"

class UOptionalUICategory;
class UObject;

UCLASS(Blueprintable)
class UOptionalUICategory : public UDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVisibilityChanged, UOptionalUICategory*, Category, bool, IsVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

