#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHUDVisibilityMode.h"
#include "HUDVisibilityRegisteredWidget.h"
#include "EHUDVisibilityPresets.h"
#include "EHUDVisibilityGroups.h"
#include "Components/SlateWrapperTypes.h"
#include "HUDVisibilityGroup.generated.h"

class UHUDVisibilityGroup;
class UWidget;

UCLASS(Blueprintable)
class FSD_API UHUDVisibilityGroup : public UDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVisibilityDelegate, UHUDVisibilityGroup*, Group, bool, IsVisible);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModeDelegate, UHUDVisibilityGroup*, Group, EHUDVisibilityMode, Mode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModeDelegate OnModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityDelegate OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDVisibilityGroups GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDynamicMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowHiddenMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDynamicallyVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHUDVisibilityRegisteredWidget> RegisteredWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDVisibilityMode RecommendedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDVisibilityMode MinimalMode;
    
public:
    UHUDVisibilityGroup();
    UFUNCTION(BlueprintCallable)
    void SetModeFromPreset(EHUDVisibilityPresets Preset);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(EHUDVisibilityMode InMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SetHudGroupDynamicallyVisible(UHUDVisibilityGroup* Group, bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGroupDynamicallyVisible(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void RegisterWidgetWithVisibilityGroup(UWidget* Widget, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterMultipleWidgetsWithVisibilityGroup(TArray<UWidget*> Widgets, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModeAllowed(EHUDVisibilityMode InMode) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDynamicMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHudGroupVisible(UHUDVisibilityGroup* Group);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroupVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHUDVisibilityMode GetMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EHUDVisibilityMode> GetAllowedModes() const;
    
};

