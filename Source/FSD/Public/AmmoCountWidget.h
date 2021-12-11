#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AmmoCountWidget.generated.h"

class UItemAggregator;
class APlayerCharacter;
class AItem;

UCLASS(Abstract, EditInlineNew)
class UAmmoCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemAggregator* Aggregator;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibleChanged(bool Visible, bool showClipCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTotalVisibleChanged(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTotalChanged(int32 Total);
    
    UFUNCTION(BlueprintCallable)
    void OnItemTotalChanged(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAmountChanged(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmountChanged(int32 count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoItemEquipped();
    
public:
    UAmmoCountWidget();
};

