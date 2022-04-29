#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossFightWidget.generated.h"

class UBossFightInterface;
class IBossFightInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBossFightWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBossFightInterface> BossFight;
    
    UBossFightWidget();
};

