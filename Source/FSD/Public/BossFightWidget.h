#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossFightWidget.generated.h"

class IBossFightInterface;
class UBossFightInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBossFightWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBossFightInterface> BossFight;
    
    UBossFightWidget();
};

