#pragma once
#include "CoreMinimal.h"
#include "PerkHUDWidget.h"
#include "PerkHUDIconWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerkHUDIconWidget : public UPerkHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CoolDownProgress;
    
public:
    UPerkHUDIconWidget();
};

