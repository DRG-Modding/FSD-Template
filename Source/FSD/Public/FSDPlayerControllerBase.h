#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlatformComponent.h"
#include "LocalVoiceStatusDelegate.h"
#include "EMinersManualSinglePage.h"
#include "UObject/NoExportTypes.h"
#include "EHUDVisibilityReason.h"
#include "EMinersManualSection.h"
#include "EDisconnectReason.h"
#include "FSDPlayerControllerBase.generated.h"

class UMaterialParameterCollection;
class UWindowManager;
class UPlayerCharacterID;
class UEscapeMenuWindow;

UCLASS(Blueprintable)
class AFSDPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalVoiceStatus OnPlayerVoiceStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithBlackScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWindowManager* WindowManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformComponent> PlatformComponentClasses;
    
public:
    AFSDPlayerControllerBase();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleAnalogCursor(bool Visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAspectRatioAxisConstraint();
    
    UFUNCTION(BlueprintCallable)
    void StartAspectRatioAxisConstraint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEscapeMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Cheat_SwitchCharacter(UPlayerCharacterID* NewCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecievePreClientTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveHUDVisibilityChanged(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStandaloneMinersManualPage(EMinersManualSinglePage page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStandaloneMinersManual(EMinersManualSection Section, const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UEscapeMenuWindow* GetEscapeMenu() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WasKicked(EDisconnectReason reason);
    
};

