#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityReason.h"
#include "GameFramework/PlayerController.h"
#include "PlatformComponent.h"
#include "EDisconnectReason.h"
#include "FSDPlayerControllerBase.generated.h"

class UMaterialParameterCollection;
class UWindowManager;
class UPlayerCharacterID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerControllerBaseOnPlayerVoiceStatusChanged, bool, voiceChatting);

UCLASS()
class AFSDPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerControllerBaseOnPlayerVoiceStatusChanged OnPlayerVoiceStatusChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bStartWithBlackScreen;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWindowManager* WindowManager;
    
    UPROPERTY(Config)
    TArray<FPlatformComponent> PlatformComponentClasses;
    
    UFUNCTION(BlueprintCallable)
    void ToggleAnalogCursor(bool Visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAspectRatioAxisConstraint();
    
    UFUNCTION(BlueprintCallable)
    void StartAspectRatioAxisConstraint();
    
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
    UFUNCTION(BlueprintCallable)
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WasKicked(EDisconnectReason reason);
    
    AFSDPlayerControllerBase();
};

