#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CraftingCost.h"
#include "Craftable.generated.h"

class AFSDPlayerState;
class UObject;
class UPlayerCharacterID;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FSD_API UCraftable : public UInterface {
    GENERATED_BODY()
};

class FSD_API ICraftable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void PreviewItem(AFSDPlayerState* PlayerState, bool Show) const PURE_VIRTUAL(PreviewItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const PURE_VIRTUAL(IsOwned, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FCraftingCost> GetResourceCost() const PURE_VIRTUAL(GetResourceCost, return TArray<FCraftingCost>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetRequiredPlayerRank() const PURE_VIRTUAL(GetRequiredPlayerRank, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FCraftingCost GetFashioniteCost() const PURE_VIRTUAL(GetFashioniteCost, return FCraftingCost{};);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetCraftingCreditsCost() const PURE_VIRTUAL(GetCraftingCreditsCost, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetCraftableName() const PURE_VIRTUAL(GetCraftableName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetCraftableDescription() const PURE_VIRTUAL(GetCraftableDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual void CraftItemWithFashionite(UObject* WorldContextObject, UPlayerCharacterID* characterID) const PURE_VIRTUAL(CraftItemWithFashionite,);
    
    UFUNCTION(BlueprintCallable)
    virtual void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const PURE_VIRTUAL(CraftItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanCraftWithFashionite(UObject* WorldContextObject) const PURE_VIRTUAL(CanCraftWithFashionite, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanCraft(UObject* WorldContextObject) const PURE_VIRTUAL(CanCraft, return false;);
    
};

