#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "FSDUserWidget.h"
#include "Layout/Margin.h"
#include "UObject/NoExportTypes.h"
#include "ActorTrackingWidget.generated.h"

class AActor;
class USceneComponent;
class APlayerController;
class UActorTrackingWidget;

UCLASS(Abstract, EditInlineNew)
class UActorTrackingWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float ScaleBy;
    
    UPROPERTY(EditAnywhere)
    FMargin ScreenMargin;
    
    UPROPERTY(EditAnywhere)
    int32 WidgetZOrder;
    
    UPROPERTY(EditAnywhere)
    bool bTrackCenterOfMass;
    
    UPROPERTY(EditAnywhere)
    bool bHideWhenPlayerNearby;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetSet(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetDistanceChanged(float Distance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInViewChanged(bool inView, float Angle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRenderTranslation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindScreenPosition(APlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector& ScreenCord, float& Angle);
    
    UFUNCTION(BlueprintCallable)
    static UActorTrackingWidget* CreateTrackingWidget(APlayerController* PlayerController, TSubclassOf<UActorTrackingWidget> WidgetType, USceneComponent* NewTargetComponent);
    
    UActorTrackingWidget();
};

