#pragma once
#include "CoreMinimal.h"
#include "ActorTrackingWidget.h"
#include "LockOnTrackingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULockOnTrackingWidget : public UActorTrackingWidget {
    GENERATED_BODY()
public:
    ULockOnTrackingWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockOn(int32 numberOfLockOnsOnThisTarget, int32 totalNumberOfLockOns);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireComplete(int32 numberOfLockOnsOnThisTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanUpWidget(bool showFade);
    
};

