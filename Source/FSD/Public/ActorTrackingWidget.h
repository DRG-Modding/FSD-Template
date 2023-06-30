#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "FSDUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ActorTrackingWidget.generated.h"

class AActor;
class APlayerController;
class UActorTrackingWidget;
class USceneComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UActorTrackingWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ScreenMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackCenterOfMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenPlayerNearby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenPlayerFarAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTargetDistanceUpdate;
    
public:
    UActorTrackingWidget();
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
    
};

