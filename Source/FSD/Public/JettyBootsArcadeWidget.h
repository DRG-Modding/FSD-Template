#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "JettyBootsArcadeWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UJettyBootsArcadeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UJettyBootsArcadeWidget();
};

