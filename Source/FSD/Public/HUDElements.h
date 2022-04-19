#pragma once
#include "CoreMinimal.h"
#include "HUDElementData.h"
#include "HUDElements.generated.h"

USTRUCT(BlueprintType)
struct FHUDElements {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData OnScreenHelp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData EnemyHealth;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData RadarDepth;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData PlayerHealthShield;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData PlayerNameClassIcon;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData PlayerItems;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData PlayerResources;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData WeaponInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData Grenades;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData FlashLight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData Flares;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData Crosshair;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData Objectives;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData TeamDisplay;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElementData SentryGunDisplay;
    
public:
    FSD_API FHUDElements();
};

