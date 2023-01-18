#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemsBarIcon.generated.h"

class AItem;
class APlayerCharacter;
class UItemsBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemsBarIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemsBar* ItemBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

