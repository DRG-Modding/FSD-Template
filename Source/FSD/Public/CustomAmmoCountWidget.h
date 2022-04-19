#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomAmmoCountWidget.generated.h"

class AItem;

UCLASS(Abstract, EditInlineNew)
class UCustomAmmoCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AItem> Item;
    
public:
    UCustomAmmoCountWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSet();
    
};

