#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityReason.h"
#include "GameFramework/HUD.h"
#include "FSDHUD.generated.h"

class APlayerController;
class URadarPointComponent;
class APlayerCharacter;
class AFSDHUD;
class APlayerCameraDrone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDHUDSetObjectivesVisible, bool, InVisible, bool, animate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDHUDOnHUDVisibilityChanged, bool, InHudVisible);

UCLASS(NonTransient)
class AFSDHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDHUDSetObjectivesVisible SetObjectivesVisible;
    
    UPROPERTY(BlueprintAssignable)
    FFSDHUDOnHUDVisibilityChanged OnHUDVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 IsVisibleFlags;
    
public:
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
    
    AFSDHUD();
};

