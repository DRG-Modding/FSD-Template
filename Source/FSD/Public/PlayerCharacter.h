#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "HoldButton.h"
#include "HeadlightOnChangedEventDelegate.h"
#include "GameplayTagAssetInterface.h"
#include "CameraModeChangedDelegate.h"
#include "Targetable.h"
#include "AcceptInviteSignatureDelegate.h"
#include "RejoinListener.h"
#include "PlaySoundInterface.h"
#include "SchematicEventDelegate.h"
#include "CharacterDelegateDelegate.h"
#include "OnCharacterDeathChangeSignatureDelegate.h"
#include "BoolDelegateDelegate.h"
#include "OnCharacterStateChangedSignatureDelegate.h"
#include "DelegateDelegate.h"
#include "CollectedEverythingEventDelegate.h"
#include "DownCameraSettings.h"
#include "SkinEventDelegate.h"
#include "CollectedDrinkDelegateDelegate.h"
#include "CollectedVictoryPoseEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "CollectedPickaxePartDelegateDelegate.h"
#include "CollectedVanityItemDeledateDelegate.h"
#include "DownCameraTargetChangedDelegate.h"
#include "ActionHoldEventDelegate.h"
#include "OnJumpReleasedSignatureDelegate.h"
#include "ThrowCarriableDelegateDelegate.h"
#include "SaluteEventDelegate.h"
#include "DamagedEnemyEventDelegate.h"
#include "OnJumpPressedSignatureDelegate.h"
#include "LaserPointerSecondaryDelegate.h"
#include "OnMinePressedSignatureDelegate.h"
#include "OnLaserPointerPressedSignatureDelegate.h"
#include "OnFlareThrownDelegate.h"
#include "UpdateMeshesSignatureDelegate.h"
#include "CoolDownProgressDelegateDelegate.h"
#include "OpenChatSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "RejectInviteSignatureDelegate.h"
#include "IgnoreInviteSignatureDelegate.h"
#include "ToggleMapToolSignatureDelegate.h"
#include "DepthSignatureDelegate.h"
#include "LaserPointerEventDelegate.h"
#include "OnPlayerShoutEventDelegate.h"
#include "ReviveCallEventDelegate.h"
#include "PlayerCharacterEventDelegate.h"
#include "OnCallDonkeySignatureDelegate.h"
#include "GameplayTagContainer.h"
#include "OnPerkActivationTimerFinishedDelegate.h"
#include "PlatformComponent.h"
#include "Engine/EngineTypes.h"
#include "AnalogAimSettings.h"
#include "ECharacterCameraMode.h"
#include "CameraSpringSettings.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EInputKeys.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ECharacterState.h"
#include "HeroInfo.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCharacter.generated.h"

class AItem;
class AActor;
class ATutorialManager;
class UPlayerTPAnimInstance;
class UHeightenedSenseComponent;
class UStatusEffectsComponent;
class UPerkHUDActivationWidget;
class UPawnStatsComponent;
class UMissionStatsCollector;
class AShieldGeneratorActor;
class UCommunicationComponent;
class UMaterialInstanceDynamic;
class USoundConcurrency;
class UWidgetInteractionComponent;
class UPlayerCharacterID;
class UZipLineStateComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UAudioComponent;
class USoundCue;
class USceneComponent;
class UActorTrackingComponent;
class UCharacterIntoxicationComponent;
class USpringArmComponent;
class UPointLightComponent;
class UCharacterCameraController;
class UPlayerHealthComponent;
class UCharacterSightComponent;
class UInventoryComponent;
class UCharacterUseComponent;
class USingleUsableComponent;
class UOutlineComponent;
class UObject;
class UCharacterRecoilComponent;
class UPlayerAfflictionComponent;
class UPlayerInfoComponent;
class UPlayerAttackPositionComponent;
class UPlayerTemperatureComponent;
class UPlayerReactiveTerrainTrackerComponent;
class UInstantUsable;
class UParticleSystem;
class UPawnAffliction;
class UPhysicsAsset;
class UStatusEffect;
class UCharacterStateComponent;
class UFSDAchievement;
class UAnimMontage;
class UDialogDataAsset;
class UMaterialInterface;
class UFSDPhysicalMaterial;
class UCharacterVanityComponent;
class AZipLineProjectile;
class USoundBase;
class USoundAttenuation;
class APlayerController;
class AEventRewardDispenser;
class USchematic;
class APlayerCharacter;
class AFSDPhysicsActor;
class UCappedResource;
class AFSDPlayerState;
class AFSDPlayerController;
class UInventoryList;
class UTexture2D;
class UPlayerFPAnimInstance;
class ULightComponent;
class UUsableComponent;
class UPlayerAnimInstance;

UCLASS(Abstract)
class FSD_API APlayerCharacter : public ACharacter, public IGameplayTagAssetInterface, public ITargetable, public IRejoinListener, public IPlaySoundInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKilledGrabber, AActor*, Grabber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUseDelegate, AItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFirePressedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCanEscapeGrabberDelegate, bool, bCanEscape);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemUseDelegate OnStartedUsingItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemUseDelegate OnStoppedUsingItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFirePressedDelegate OnFirePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFirePressedDelegate OnFireReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnGrenadePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegate OnPerkInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnInstantRevivePossibleEvent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHeightenedSenseComponent* HeightenedSenseComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCollectedEverythingEvent OnCollectedEverything;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSchematicEvent OnCollectedSchematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSkinEvent OnCollectedSkin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCollectedDrinkDelegate OnCollectedDrink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCollectedVictoryPoseEvent OnCollectedVictoryPose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCollectedPickaxePartDelegate OnCollectedPickaxePart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCollectedVanityItemDeledate OnCollectedVanityItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCameraModeChanged OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownCameraTargetChanged OnDownCameraTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FActionHoldEvent OnActionHoldProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FThrowCarriableDelegate OnThrowCarriableProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnJumpPressedSignature OnJumpPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnJumpReleasedSignature OnJumpReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnSecondaryFirePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnSecondaryFireReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnManualMiningBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnMinePressedSignature OnManualMiningEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnLaserPointerPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnLaserPointerReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnTerrainScannerPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnLaserPointerPressedSignature OnTerrainScannerReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnFlareThrown OnFlareThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateMeshesSignature OnUpdateMeshes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOpenChatSignature OnOpenChat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAcceptInviteSignature OnAcceptInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRejectInviteSignature OnRejectInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIgnoreInviteSignature OnIgnoreInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FToggleMapToolSignature OnToggleMapTool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FToggleMapToolSignature OnToggleScanTool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDepthSignature OnDepthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnCharacterStateChangedSignature OnCharacterStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnCharacterDeathChangeSignature OnCharacterDeathChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDamagedEnemyEvent OnDamagedEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLaserPointerEvent OnLaserPointerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLaserPointerSecondary OnSecondaryLaserPointerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSaluteEvent OnSaluteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnPlayerShoutEvent OnPlayerShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnPlayerShoutEvent OnBoscoSalute;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterDelegate OnRevivedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReviveCallEvent OnReviveCallEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlayerCharacterEvent OnRevivedOtherCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHeadlightOnChangedEvent OnHeadlightOnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnCallDonkeySignature OnCallDonkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UZipLineStateComponent* ZipLineStateComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> EscapableGrabberEnemies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FKilledGrabber OnKilledGrabber;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnPerkActivationTimerFinished OnPerkActivationTimerFinished;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPerkHUDActivationWidget* BoundPerkActivationW;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PerkActivationTimer;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCanEscapeGrabberDelegate OnCanEscapeGrabberChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GrabbedByClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCoolDownProgressDelegate OnCoolDownProgress;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingBittenByCaveLeech;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetInteractionComponent* WidgetInteraction;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FPlatformComponent> PlatformComponentClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownCameraSettings DownCameraSettings;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AShieldGeneratorActor>> ActiveShieldGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector EstimatedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldButton FlareHeadlightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldButton CycleItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldButton ToggleHUDButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipLaserpointerHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsPressingMovementInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATutorialManager> TutorialManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATutorialManager> TutorialManagerSpacerig;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPersonRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UActorTrackingComponent* ActorTracking;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UCharacterIntoxicationComponent* IntoxicationComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStatsCollector* MissionStatsCollector;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpringArmComponent* ThirdPersonSpringArm;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* ThirdPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPointLightComponent* ThirdPersonLight;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpringArmComponent* FollowSpringArm;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* DownCamera;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterCameraController* CameraController;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterSightComponent* SightComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterUseComponent* UseComponentNew;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UsableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterRecoilComponent* RecoilComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* StatusEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAfflictionComponent* PawnAfflictionComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerInfoComponent* PlayerInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAttackPositionComponent* AttackerPositioningComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCommunicationComponent* CommunicationComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerTemperatureComponent* TemperatureComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInstantUsable* TrackGrindUsableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningSpeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RunBoost;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ThrowCarriableProgress;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, UCharacterStateComponent*> CharacterStates;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, ReplicatedUsing=OnRep_CharacterState, meta=(AllowPrivateAccess=true))
    UCharacterStateComponent* ActiveCharacterState;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsInDropPod;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsInEscapePod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonMemoryDuration;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsRunning;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool CanDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashInputWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashFowardMovementMinRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashRightMovementMaxRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashControllerMinValueRequired;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> DashStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ForwardInput;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float RightInput;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ControllerForwardInput;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ControllerRightInput;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float StoppedRunningTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ShoutPressedTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingItemPressed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingPressed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float UsingDelay;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_HeadLightOn, meta=(AllowPrivateAccess=true))
    bool HeadLightOn;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float JumpPressedTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanMove;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanAim;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanUseItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanChangeItems;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanMine;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsStandingDown, meta=(AllowPrivateAccess=true))
    bool IsStandingDown;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool InDanceRange;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsDancing, meta=(AllowPrivateAccess=true))
    bool IsDancing;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DanceStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDAchievement* HappyFeetAchievement;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_DanceMove, meta=(AllowPrivateAccess=true))
    int32 DanceMove;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ECharacterCameraMode CameraMode;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsInCharacterSelectionWorld;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPDrinkSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPDrinkSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* SaluteShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DrinkShout;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentSaluteMontage;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool BlockTrackGrindOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamClassID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RadarMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 RadarMaterialAngleParameterIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector LastUpdateVisibiltyPos;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* FallbackPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ClientReady;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UCharacterStateComponent* NextCharacterState;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool PlayerIsLeavingInDroppod;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanInstantRevive;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasInitializedPerks;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
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

