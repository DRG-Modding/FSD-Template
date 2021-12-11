#pragma once
#include "CoreMinimal.h"
#include "HUDElementData.h"
#include "HUDElements.generated.h"

USTRUCT(BlueprintType)
struct FHUDElements {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FHUDElementData OnScreenHelp;
    
    UPROPERTY()
    FHUDElementData EnemyHealth;
    
    UPROPERTY()
    FHUDElementData RadarDepth;
    
    UPROPERTY()
    FHUDElementData PlayerHealthShield;
    
    UPROPERTY()
    FHUDElementData PlayerNameClassIcon;
    
    UPROPERTY()
    FHUDElementData PlayerItems;
    
    UPROPERTY()
    FHUDElementData PlayerResources;
    
    UPROPERTY()
    FHUDElementData WeaponInfo;
    
    UPROPERTY()
    FHUDElementData Grenades;
    
    UPROPERTY()
    FHUDElementData FlashLight;
    
    UPROPERTY()
    FHUDElementData Flares;
    
    UPROPERTY()
    FHUDElementData Crosshair;
    
    UPROPERTY()
    FHUDElementData Objectives;
    
    UPROPERTY()
    FHUDElementData TeamDisplay;
    
    UPROPERTY()
    FHUDElementData SentryGunDisplay;
    
public:
    FSD_API FHUDElements();
};

