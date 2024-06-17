#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHolidayType.h"
#include "EPropHuntEvent.h"
#include "PropHuntEventSettings.h"
#include "PropHuntSettingsShouts.h"
#include "PropHuntSettings.generated.h"

class AActor;
class APawn;
class APropHuntDisguiseActor;
class APropHuntHunterItem;
class UNiagaraSystem;
class UObject;
class UPropHuntEndScreenWidget;
class UPropHuntOverlayWidget;
class USoundCue;

UCLASS(Blueprintable)
class FSD_API UPropHuntSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusAmmoOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropHuntSettingsShouts Shouts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPropHuntOverlayWidget> OverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPropHuntEndScreenWidget> EndScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APropHuntHunterItem> HunterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<APropHuntDisguiseActor>> DisguiseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHolidayType, FPropHuntEventSettings> HolidayDisguiseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> ParticlesOnPropSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> ParticlesOnPropHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> ParticlesOnPropMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioHunterBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioHunterThrowableMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioHunterThrowableHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioPropBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioPropEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioGameWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> AudioGameLost;
    
public:
    UPropHuntSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayEventAudio(APawn*& InCharacter, TEnumAsByte<EPropHuntEvent> InEvent, bool InPlay2D) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    void GetHunterThrowableImpactFX(UObject* WorldContext, AActor* InHitActor, USoundCue*& OutSound, UNiagaraSystem*& OutParticles) const;
    
};

