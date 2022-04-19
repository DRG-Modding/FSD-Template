#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemsBarIcon.generated.h"

class AItem;
class APlayerCharacter;
class UItemsBar;

UCLASS(Abstract, EditInlineNew)
class UItemsBarIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool Selected;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UItemsBar* ItemBar;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    UItemsBarIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
};

