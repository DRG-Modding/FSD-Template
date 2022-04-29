#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SoundClassWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USoundClassWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USoundClassWidget();
};

