#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Components/SlateWrapperTypes.h"
#include "WindowManager.generated.h"

class USoundCue;
class UWindowWidget;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWindowManagerOnFirstWindowOpened);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWindowManagerOnLastWindowClosed);

UCLASS(BlueprintType)
class UWindowManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWindowManagerOnFirstWindowOpened OnFirstWindowOpened;
    
    UPROPERTY(BlueprintAssignable)
    FWindowManagerOnLastWindowClosed OnLastWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* AudioWindowOpen;
    
    UPROPERTY(Export, Transient)
    TArray<UWindowWidget*> WindowStack;
    
    UPROPERTY(Export, Transient)
    TMap<TSubclassOf<UWindowWidget>, UWindowWidget*> WindowList;
    
    UPROPERTY(Export, Transient)
    TMap<TSubclassOf<UUserWidget>, TWeakObjectPtr<UUserWidget>> WidgetSingletonCache;
    
    UPROPERTY(Transient)
    bool ResolutionDownscaleActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSingletonWidgetVisibility(TSubclassOf<UUserWidget> WidgetClass, ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceWindow(UWindowWidget* Window);
    
    UFUNCTION(BlueprintCallable)
    UWindowWidget* OpenWindowFromClass(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder, bool ShowCursor);
    
    UFUNCTION(BlueprintCallable)
    void OpenWindow(UWindowWidget* Window, bool PlayAudio, bool ShowCursor);
    
    UFUNCTION(BlueprintCallable)
    UWindowWidget* OpenSingleUseWindow(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindowOpen(UWindowWidget* Window) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopWindow(UWindowWidget* Window) const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetOrCreateSingletonWidget(TSubclassOf<UUserWidget> WidgetClass, bool& WidgetCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWindowWidget* GetCurrentWindow() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow(UWindowWidget* Window);
    
    UFUNCTION(BlueprintCallable)
    void CloseTopWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseAllWindows();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CenterCursor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyWindowsOpen() const;
    
    UWindowManager();
};

