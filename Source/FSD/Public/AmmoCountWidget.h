#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AmmoCountWidget.generated.h"

class APlayerCharacter;
class AItem;
class UItemAggregator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAmmoCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UItemAggregator* Aggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowClipAndTotalAsOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountThreshold;
    
public:
    UAmmoCountWidget();
protected:
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
    
};

