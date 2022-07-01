#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "WindowManagerDelegateDelegate.h"
#include "Components/SlateWrapperTypes.h"
#include "WindowManager.generated.h"

class UWindowWidget;
class USoundCue;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UWindowManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowManagerDelegate OnFirstWindowOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowManagerDelegate OnLastWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AudioWindowOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWindowWidget*> WindowStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UWindowWidget>, UWindowWidget*> WindowList;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TMap<TSubclassOf<UUserWidget>, TWeakObjectPtr<UUserWidget>> WidgetSingletonCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ResolutionDownscaleActive;
    
public:
    UWindowManager();
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
    
};

