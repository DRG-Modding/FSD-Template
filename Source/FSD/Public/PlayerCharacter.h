#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "CollectedPickaxePartDelegateDelegate.h"
#include "RejoinListener.h"
#include "GameplayTagAssetInterface.h"
#include "Targetable.h"
#include "OnFlareThrownDelegate.h"
#include "PlaySoundInterface.h"
#include "UObject/NoExportTypes.h"
#include "SkinEventDelegate.h"
#include "DelegateDelegate.h"
#include "OnPerkActivationTimerFinishedDelegate.h"
#include "UpdateMeshesSignatureDelegate.h"
#include "DamagedEnemyEventDelegate.h"
#include "BoolDelegateDelegate.h"
#include "CollectedEverythingEventDelegate.h"
#include "SchematicEventDelegate.h"
#include "DownCameraSettings.h"
#include "CollectedDrinkDelegateDelegate.h"
#include "PlatformComponent.h"
#include "CollectedVictoryPoseEventDelegate.h"
#include "CollectedVanityItemDeledateDelegate.h"
#include "OnLaserPointerPressedSignatureDelegate.h"
#include "CameraModeChangedDelegate.h"
#include "DownCameraTargetChangedDelegate.h"
#include "ActionHoldEventDelegate.h"
#include "SaluteEventDelegate.h"
#include "ThrowCarriableDelegateDelegate.h"
#include "OnJumpPressedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnJumpReleasedSignatureDelegate.h"
#include "OnMinePressedSignatureDelegate.h"
#include "OpenChatSignatureDelegate.h"
#include "CoolDownProgressDelegateDelegate.h"
#include "AcceptInviteSignatureDelegate.h"
#include "RejectInviteSignatureDelegate.h"
#include "IgnoreInviteSignatureDelegate.h"
#include "ToggleMapToolSignatureDelegate.h"
#include "DepthSignatureDelegate.h"
#include "OnCharacterStateChangedSignatureDelegate.h"
#include "OnCharacterDeathChangeSignatureDelegate.h"
#include "CharacterDelegateDelegate.h"
#include "LaserPointerEventDelegate.h"
#include "LaserPointerSecondaryDelegate.h"
#include "HoldButton.h"
#include "AnalogAimSettings.h"
#include "OnPlayerShoutEventDelegate.h"
#include "ReviveCallEventDelegate.h"
#include "PlayerCharacterEventDelegate.h"
#include "HeroInfo.h"
#include "HeadlightOnChangedEventDelegate.h"
#include "OnCallDonkeySignatureDelegate.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterCameraMode.h"
#include "CameraSpringSettings.h"
#include "Engine/EngineTypes.h"
#include "EInputKeys.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ECharacterState.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "PlayerCharacter.generated.h"

class AShieldGeneratorActor;
class UCharacterStateComponent;
class UHeightenedSenseComponent;
class AActor;
class AItem;
class UPlayerInfoComponent;
class UStatusEffectsComponent;
class UPlayerAttackPositionComponent;
class UZipLineStateComponent;
class ATutorialManager;
class UMissionStatsCollector;
class ULightComponent;
class AFSDPlayerState;
class UCharacterUseComponent;
class UCharacterIntoxicationComponent;
class UPerkHUDActivationWidget;
class UAnimMontage;
class UCharacterSightComponent;
class UWidgetInteractionComponent;
class UPlayerCharacterID;
class UCharacterRecoilComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class USceneComponent;
class UActorTrackingComponent;
class USpringArmComponent;
class UPointLightComponent;
class UCharacterCameraController;
class UPlayerHealthComponent;
class UInventoryComponent;
class USingleUsableComponent;
class UOutlineComponent;
class UPawnStatsComponent;
class UPlayerAfflictionComponent;
class UCommunicationComponent;
class UPlayerTemperatureComponent;
class UPlayerReactiveTerrainTrackerComponent;
class UInstantUsable;
class USoundCue;
class UParticleSystem;
class UPawnAffliction;
class UPhysicsAsset;
class UAudioComponent;
class UStatusEffect;
class UFSDAchievement;
class UTexture2D;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UFSDPhysicalMaterial;
class UCharacterVanityComponent;
class AZipLineProjectile;
class USoundBase;
class USoundAttenuation;
class USoundConcurrency;
class APlayerController;
class AEventRewardDispenser;
class USchematic;
class APlayerCharacter;
class AFSDPhysicsActor;
class UCappedResource;
class UPlayerTPAnimInstance;
class AFSDPlayerController;
class UInventoryList;
class UPlayerFPAnimInstance;
class UUsableComponent;
class UPlayerAnimInstance;
class UObject;

UCLASS(Abstract, Blueprintable)
class FSD_API APlayerCharacter : public ACharacter, public IGameplayTagAssetInterface, public ITargetable, public IRejoinListener, public IPlaySoundInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKilledGrabber, AActor*, Grabber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUseDelegate, AItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFirePressedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCanEscapeGrabberDelegate, bool, bCanEscape);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUseDelegate OnStartedUsingItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUseDelegate OnStoppedUsingItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFirePressedDelegate OnFirePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFirePressedDelegate OnFireReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnGrenadePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPerkInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnInstantRevivePossibleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHeightenedSenseComponent* HeightenedSenseComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedEverythingEvent OnCollectedEverything;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchematicEvent OnCollectedSchematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkinEvent OnCollectedSkin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedDrinkDelegate OnCollectedDrink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedVictoryPoseEvent OnCollectedVictoryPose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedPickaxePartDelegate OnCollectedPickaxePart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedVanityItemDeledate OnCollectedVanityItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraModeChanged OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownCameraTargetChanged OnDownCameraTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionHoldEvent OnActionHoldProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowCarriableDelegate OnThrowCarriableProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpPressedSignature OnJumpPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpReleasedSignature OnJumpReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnSecondaryFirePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnSecondaryFireReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnManualMiningBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnManualMiningEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnLaserPointerPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnLaserPointerReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnTerrainScannerPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnTerrainScannerReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlareThrown OnFlareThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateMeshesSignature OnUpdateMeshes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenChatSignature OnOpenChat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcceptInviteSignature OnAcceptInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRejectInviteSignature OnRejectInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIgnoreInviteSignature OnIgnoreInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleMapToolSignature OnToggleMapTool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleMapToolSignature OnToggleScanTool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDepthSignature OnDepthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterStateChangedSignature OnCharacterStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDeathChangeSignature OnCharacterDeathChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamagedEnemyEvent OnDamagedEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaserPointerEvent OnLaserPointerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaserPointerSecondary OnSecondaryLaserPointerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaluteEvent OnSaluteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerShoutEvent OnPlayerShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerShoutEvent OnBoscoSalute;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDelegate OnRevivedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReviveCallEvent OnReviveCallEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterEvent OnRevivedOtherCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeadlightOnChangedEvent OnHeadlightOnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCallDonkeySignature OnCallDonkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UZipLineStateComponent* ZipLineStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> EscapableGrabberEnemies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKilledGrabber OnKilledGrabber;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerkActivationTimerFinished OnPerkActivationTimerFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPerkHUDActivationWidget* BoundPerkActivationW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerkActivationTimer;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanEscapeGrabberDelegate OnCanEscapeGrabberChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GrabbedByClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressDelegate OnCoolDownProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingBittenByCaveLeech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetInteractionComponent* WidgetInteraction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformComponent> PlatformComponentClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownCameraSettings DownCameraSettings;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AShieldGeneratorActor>> ActiveShieldGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EstimatedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldButton FlareHeadlightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldButton CycleItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldButton ToggleHUDButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipLaserpointerHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsPressingMovementInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATutorialManager> TutorialManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATutorialManager> TutorialManagerSpacerig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPersonRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UActorTrackingComponent* ActorTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCharacterIntoxicationComponent* IntoxicationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMissionStatsCollector* MissionStatsCollector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USpringArmComponent* ThirdPersonSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* ThirdPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* ThirdPersonLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USpringArmComponent* FollowSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* DownCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterCameraController* CameraController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterSightComponent* SightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterUseComponent* UseComponentNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UsableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterRecoilComponent* RecoilComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* StatusEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerAfflictionComponent* PawnAfflictionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerInfoComponent* PlayerInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerAttackPositionComponent* AttackerPositioningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommunicationComponent* CommunicationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerTemperatureComponent* TemperatureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstantUsable* TrackGrindUsableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunBoostChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RunBoostActivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RunBoostParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* RunBoostAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* HangingPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HangingSimulationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayableCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SprintSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SpringSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnalogAimSettings AimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedCameraMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedCameraMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnToFaceScannerAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Turn180Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingMovementSpeedPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingMaxFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrowHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingThrowMinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingThrowMaxForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> CarryingThrowingStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThrowCarriableProgress;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TMap<uint8, UCharacterStateComponent*> CharacterStates;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_CharacterState, meta=(AllowPrivateAccess=true))
    UCharacterStateComponent* ActiveCharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInDropPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInEscapePod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonMemoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashInputWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashFowardMovementMinRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashRightMovementMaxRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashControllerMinValueRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> DashStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ControllerForwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ControllerRightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StoppedRunningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShoutPressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingItemPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UsingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HeadLightOn, meta=(AllowPrivateAccess=true))
    bool HeadLightOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpPressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanUseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanChangeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanMine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsStandingDown, meta=(AllowPrivateAccess=true))
    bool IsStandingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool InDanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDancing, meta=(AllowPrivateAccess=true))
    bool IsDancing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DanceStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDAchievement* HappyFeetAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DanceMove, meta=(AllowPrivateAccess=true))
    int32 DanceMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterCameraMode CameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInCharacterSelectionWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPDrinkSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPDrinkSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentSaluteMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool BlockTrackGrindOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RadarMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RadarMaterialAngleParameterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastUpdateVisibiltyPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* FallbackPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ClientReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCharacterStateComponent* NextCharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool PlayerIsLeavingInDroppod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanInstantRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasInitializedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCharacterVanityComponent* CharacterVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSpringSettings CameraSpringSettings;
    
public:
    APlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UseZipLine(AZipLineProjectile* ZipLine, const FVector& Start, const FVector& End);
    
    UFUNCTION(BlueprintCallable)
    void Unparalyze();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleScanTool(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUDReleased();
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUDPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleHeadLight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ThrowFlareReleased();
    
    UFUNCTION(BlueprintCallable)
    void ThrowFlarePressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowFlare();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopUsingItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTutorials(bool ResetTutorials);
    
    UFUNCTION(BlueprintCallable)
    void StartPerkActivation(UPerkHUDActivationWidget* PerkActivationWidget, float HoldTime);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void ShowSimpleHoldProgress(APlayerController* PlayerController, const FText& InDescription, float InProgress);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStandingDown(bool standingDown);
    
    UFUNCTION(BlueprintCallable)
    void SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetOutsideShieldGenerator(AShieldGeneratorActor* Shield);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCharacterSelectionModel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetInstantUsables(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInsideShieldGenerator(AShieldGeneratorActor* Shield);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInCharacterSelectionWorld();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetHeadLight(bool On);
    
    UFUNCTION(BlueprintCallable)
    void SetFallbackPhysicalMaterial(UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMode(ECharacterCameraMode NewCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAttached(USceneComponent* AttachTo, bool DelayUntilLanded);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerDash();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartSalute(UAnimMontage* startSalute);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Shouted();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetUsing(bool characterIsUsing);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRunning(bool characterIsRunning);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRunBoostActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsThrowingCarriable(bool isThrowing);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsPressingMovementInput(bool aIsPushingInput);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsJumpPressed(bool InJumpPressed);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDispenserReward(AEventRewardDispenser* Dispenser, USchematic* Reward);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetClientReady();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_InstantRevive(APlayerCharacter* ReviveTarget, EInputKeys Key);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EscapeFromGrabber();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheatRevive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheatKillAll();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheatGodMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheatFlyMode(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheatDebugFastMode(bool fast);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CancelThrowingCarriable();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CallDonkey();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    
    UFUNCTION(BlueprintCallable)
    void SendLevelUpStatistics(const int32 currentRank);
    
    UFUNCTION(BlueprintCallable)
    void ReviveProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RequestChangeInGravityScale(float newGravityScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RejectInvite();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnHeadlightOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEscapedFromGrabber();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ShowFieldMedicInstantReviveEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareForEndScreen();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PilotVehicle(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void Paralyze(AActor* ParalyzedBy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenChat();
    
    UFUNCTION(BlueprintCallable)
    void OnResourceFull(UCappedResource* Resource);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsStandingDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDancing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeadLightOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DanceMove();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterState(UCharacterStateComponent* oldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkActivationFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterBeginUse(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void MouseWheelUp();
    
    UFUNCTION(BlueprintCallable)
    void MouseWheelDown();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LockIfState(ECharacterState LockIf, ECharacterState LockTo, bool canMoveAndAim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void JumpRelease();
    
    UFUNCTION(BlueprintCallable)
    void JumpPress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinDistance(AActor* Source, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalking() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateActive(ECharacterState State) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaluting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParalyzed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMovementInputPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLyingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInState(ECharacterState aState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipepdActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void InstantRevive(APlayerCharacter* ReviveTarget, EInputKeys Key);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IgnoreInvite();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenRevived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterUseComponent* GetUseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerTPAnimInstance* GetTPAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastRevival() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterState GetPreviousState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryList* GetInventoryList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHeroSwitchToMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHeroName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHeroInfo GetHeroInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHeroIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetHeroColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerFPAnimInstance* GetFPAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetDownCameraTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetDownCameraRotationPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetDownCameraAttachPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULightComponent* GetDebugPointLightComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunicationComponent* GetCommunicationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClassXP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterVanityComponent* GetCharacterVanity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterStateComponent* GetCharacterStateComponent(ECharacterState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBeginRevivedProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UUsableComponent* GetBeastMasterUsableComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorGroundLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AShieldGeneratorActor*> GetActiveShieldGenerators();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerAnimInstance* GetActiveAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceIsPressingMovementInputKey();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitVehicle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CycleItemUp();
    
    UFUNCTION(BlueprintCallable)
    void CycleItemReleased();
    
    UFUNCTION(BlueprintCallable)
    void CycleItemPressed();
    
    UFUNCTION(BlueprintCallable)
    void CycleItemDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void ConsumeCycleItemButton();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_TargetDamaged(UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CheckWithoutAPaddleAchievement();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(ECharacterState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeIfDifferentState(ECharacterState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEscapeFromGrabber() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallDonkeyReleased();
    
    UFUNCTION(BlueprintCallable)
    void CallDonkeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdateMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnControllerReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void AnnounceSchematicCollected(USchematic* InSchematic);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_StartSalute(UAnimMontage* saluteMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowImpactEffects(UParticleSystem* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal Orientation) const;
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowFieldMedicInstantReviveEffects();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseFromVector(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseFromDirectionAndForce(const FVector& Direction, float force);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AcknowledgeCharacterState(ECharacterState eState);
    
    UFUNCTION(BlueprintCallable)
    void AcceptInvite();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

