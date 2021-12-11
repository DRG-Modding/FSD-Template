#pragma once
#include "CoreMinimal.h"
#include "EPerkHUDActivationLocation.h"
#include "PerkHUDWidget.h"
#include "PerkHUDActivationWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPerkHUDActivationWidget : public UPerkHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EPerkHUDActivationLocation Location;
    
public:
    UPerkHUDActivationWidget();
};

