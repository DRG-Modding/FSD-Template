#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "WeaponMaintenanceTabWidget.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UWeaponMaintenanceTabWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UWeaponMaintenanceTabWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool HasNewNotifications(UObject* WorldContext) const;
    
};

