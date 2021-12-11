#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemsBarIcon.generated.h"

class APlayerCharacter;
class UItemsBar;
class AItem;

UCLASS(Abstract, EditInlineNew)
class UItemsBarIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Selected;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemsBar* ItemBar;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Index;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
public:
    UItemsBarIcon();
};

