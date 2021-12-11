#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WidgetToRenderTargetComponent.generated.h"

class UUserWidget;
class ULocalPlayer;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, EditInlineNew)
class UWidgetToRenderTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    FIntPoint DrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bManuallyRedraw;
    
    UPROPERTY()
    bool bRedrawRequested;
    
    UPROPERTY(EditAnywhere)
    float RedrawTime;
    
    UPROPERTY()
    float LastWidgetRenderTime;
    
    UPROPERTY(EditAnywhere)
    bool bWindowFocusable;
    
    UPROPERTY()
    FIntPoint CurrentDrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bDrawAtDesiredSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BaseMaterial;
    
    UPROPERTY()
    ULocalPlayer* OwnerPlayer;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TintColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    float OpacityFromTexture;
    
    UPROPERTY(EditAnywhere)
    bool bIsTwoSided;
    
    UPROPERTY(EditAnywhere)
    bool TickWhenOffscreen;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UUserWidget* Widget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY()
    bool bEditTimeUsable;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWidget(UUserWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    
    UFUNCTION(BlueprintCallable)
    void RequestRedraw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocalPlayer* GetOwnerPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstance() const;
    
    UWidgetToRenderTargetComponent();
};

