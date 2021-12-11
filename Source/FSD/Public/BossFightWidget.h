#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossFightWidget.generated.h"

class UBossFightInterface;
class IBossFightInterface;

UCLASS(Abstract, EditInlineNew)
class UBossFightWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TScriptInterface<IBossFightInterface> BossFight;
    
    UBossFightWidget();
};

