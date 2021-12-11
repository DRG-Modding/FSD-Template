#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDUserWidget.h"
#include "ItemsBar.generated.h"

class UItemsBarIcon;
class AItem;

UCLASS(Abstract, EditInlineNew)
class UItemsBar : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UItemsBarIcon> DefaultItemWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowSupplyItem;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UItemsBarIcon*> ItemIcons;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemsBarIcon* SupplyIcon;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemsBarIcon* SelectedIcon;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSupplyItemUnequipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSupplyItemEquipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSupplyItemAdded(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUnequipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintCallable)
    void OnItemsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemEquipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemAdded(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClear();
    
    UFUNCTION(BlueprintCallable)
    void ItemEquipped(AItem* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void ItemClicked(AItem* NewItem);
    
public:
    UItemsBar();
};

