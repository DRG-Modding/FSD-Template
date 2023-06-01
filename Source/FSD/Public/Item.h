#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AudioWithCooldown.h"
#include "DelegateDelegate.h"
#include "ItemIDInterface.h"
#include "ItemLoadoutAnimations.h"
#include "LoadoutItem.h"
#include "PlaySoundInterface.h"
#include "SaveGameIDInterface.h"
#include "Skinnable.h"
#include "Templates/SubclassOf.h"
#include "Item.generated.h"

class ACharacter;
class AItem;
class APlayerCharacter;
class UAudioComponent;
class UCameraShakeBase;
class UCurveFloat;
class UDialogDataAsset;
class UFirstPersonStaticMeshComponent;
class UItemCharacterAnimationSet;
class UItemID;
class UItemsBarIcon;
class USceneComponent;
class USkinEffect;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;
class UStaticMeshComponent;
class UTexture2D;
class UUpgradableItemComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API AItem : public AActor, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public ILoadoutItem, public IPlaySoundInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FPCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnEqipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnUnequipped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradableItemComponent* UpgradableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraShakeOnStartUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraShakeOnEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HeatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualHeatPerUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualCooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnjamDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioTemperatureFadeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemperatureFloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TemperatureAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool overHeated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOverheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementRateWhileUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayLedgeClimbWhileUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanInspectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSprintWithItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemsBarIcon> CustomIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvancedVibrationSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsUsing, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
public:
    AItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSkin();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartUsing(bool NewIsUsing);
    
public:
    UFUNCTION(BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovedFromInventory(ACharacter* oldCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveStopUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveStartUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveCycledItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_UpdateMeshses(bool NewIsFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveResupply(float percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Overheated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* Receive_GetTPAnimationEventMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTemperatureChanged(float Temperature, bool NewOverHeated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkinChanged(USkinEffect* Skin);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsing(bool OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* owningActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemLoadoutAnimations GetLoadoutAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetItemIconLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetItemIconBG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AItem* GetItemDefaultObject(TSubclassOf<AItem> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemCategory() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetHeatingAudioSceneComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemCharacterAnimationSet* GetCharacterAnimationSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsItemCategory() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddedToInventory(APlayerCharacter* ItemOwner);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

