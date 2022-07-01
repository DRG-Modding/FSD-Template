#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDUserWidget.h"
#include "ItemsBar.generated.h"

class AItem;
class UItemsBarIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemsBar : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemsBarIcon> DefaultItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSupplyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemsBarIcon*> ItemIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UItemsBarIcon* SupplyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UItemsBarIcon* SelectedIcon;
    
public:
    UItemsBar();
protected:
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
    
};

