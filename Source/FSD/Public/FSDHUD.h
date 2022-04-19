#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EHUDVisibilityReason.h"
#include "FSDHUD.generated.h"

class APlayerCharacter;
class AFSDHUD;
class APlayerController;
class URadarPointComponent;
class APlayerCameraDrone;

UCLASS(NonTransient)
class AFSDHUD : public AHUD {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetObjectivesVisible, bool, InVisible, bool, animate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudVisibilityChanged, bool, InHudVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetObjectivesVisible SetObjectivesVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHudVisibilityChanged OnHUDVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsVisibleFlags;
    
public:
    AFSDHUD();
    UFUNCTION(BlueprintCallable)
    bool ToggleHUDVisibility(EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowObjectives(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RadarPointAdded(URadarPointComponent* radarPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerSpawned(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilityChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSeamlessTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHUDVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFSDHUD* GetFSDHUD(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraDroneSpawned(APlayerCameraDrone* Drone);
    
};

