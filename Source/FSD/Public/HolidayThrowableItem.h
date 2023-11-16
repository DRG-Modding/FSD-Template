#pragma once
#include "CoreMinimal.h"
#include "ECharacterCameraMode.h"
#include "ThrowableItem.h"
#include "HolidayThrowableItem.generated.h"

UCLASS(Blueprintable)
class AHolidayThrowableItem : public AThrowableItem {
    GENERATED_BODY()
public:
    AHolidayThrowableItem(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CameraModeUpdated(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    
};

