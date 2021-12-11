#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
#include "GameFramework/Actor.h"
#include "ItemLoadoutAnimations.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameIDInterface.h"
#include "Skinnable.h"
#include "UObject/NoExportTypes.h"
#include "PlaySoundInterface.h"
#include "AudioWithCooldown.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

class USoundConcurrency;
class UItemID;
class APlayerCharacter;
class UUpgradableItemComponent;
class UCameraShake;
class UCurveFloat;
class ACharacter;
class UAudioComponent;
class USoundBase;
class UDialogDataAsset;
class UItemsBarIcon;
class USceneComponent;
class USoundAttenuation;
class UStaticMeshComponent;
class UFirstPersonStaticMeshComponent;
class USkinEffect;
class UTexture2D;
class AItem;
class UItemCharacterAnimationSet;

UCLASS(Abstract)
class FSD_API AItem : public AActor, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public ILoadoutItem, public IPlaySoundInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector FPCameraOffset;
    
    UPROPERTY(EditAnywhere)
    FAudioWithCooldown AudioFriendlyFire;
    
protected:
    UPROPERTY(EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UUpgradableItemComponent* UpgradableItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraShakeOnStartUsing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraShakeOnEquip;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HeatCurve;
    
    UPROPERTY(EditAnywhere)
    float ManualHeatPerUse;
    
    UPROPERTY(EditAnywhere)
    float CooldownRate;
    
    UPROPERTY(EditAnywhere)
    float ManualCooldownDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnjamDuration;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentTemperature;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioTemperature;
    
    UPROPERTY(EditAnywhere)
    float AudioTemperatureFadeout;
    
    UPROPERTY(EditAnywhere)
    FName TemperatureFloatParam;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* TemperatureAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool Overheated;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ShoutOverheated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAimAssistEnabled;
    
    UPROPERTY(EditAnywhere)
    float MovementRateWhileUsing;
    
    UPROPERTY(EditAnywhere)
    bool CanPlayLedgeClimbWhileUsing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanInspectItem;
    
    UPROPERTY(EditAnywhere)
    bool CanSprintWithItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UItemsBarIcon> CustomIconWidget;
    
    UPROPERTY(EditAnywhere)
    float AdvancedVibrationSendLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsUsing)
    bool IsUsing;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSkin();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    void OnTemperatureChanged(float Temperature, bool NewOverheated);
    
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
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AItem();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

