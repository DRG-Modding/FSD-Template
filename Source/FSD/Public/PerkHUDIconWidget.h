#pragma once
#include "CoreMinimal.h"
#include "PerkHUDWidget.h"
#include "PerkHUDIconWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPerkHUDIconWidget : public UPerkHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float CoolDownProgress;
    
public:
    UPerkHUDIconWidget();
};

