#include "PlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "PlayerAttackPositionComponent.h"
#include "SingleUsableComponent.h"
#include "FirstPersonSkeletalMeshComponent.h"
#include "PlayerAfflictionComponent.h"
#include "OutlineComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CharacterSightComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "CharacterRecoilComponent.h"
#include "PawnStatsComponent.h"
#include "InstantUsable.h"
#include "PlayerTemperatureComponent.h"
#include "CharacterUseComponent.h"
#include "CommunicationComponent.h"
#include "PlayerInfoComponent.h"
#include "CharacterVanityComponent.h"
#include "Camera/CameraComponent.h"
#include "ActorTrackingComponent.h"
#include "InventoryComponent.h"
#include "MissionStatsCollector.h"
#include "Components/PointLightComponent.h"
#include "CharacterCameraController.h"
#include "PlayerHealthComponent.h"
#include "PlayerReactiveTerrainTrackerComponent.h"
#include "StatusEffectsComponent.h"

class USoundBase;
class AFSDPlayerController;
class APlayerCharacter;
class AZipLineProjectile;
class USoundAttenuation;
class AItem;
class UTexture2D;
class UPerkHUDActivationWidget;
class APlayerController;
class USoundConcurrency;
class UObject;
class UAudioComponent;
class UMaterialInstanceDynamic;
class UCharacterStateComponent;
class AShieldGeneratorActor;
class UParticleSystem;
class UFSDPhysicalMaterial;
class UAnimMontage;
class AEventRewardDispenser;
class USchematic;
class AFSDPhysicsActor;
class AFSDPlayerState;
class UPlayerTPAnimInstance;
class AActor;
class UCappedResource;
class UInventoryList;
class UPlayerFPAnimInstance;
class UPlayerAnimInstance;

void APlayerCharacter::UseZipLine(AZipLineProjectile* ZipLine, const FVector& Start, const FVector& End) {
}

void APlayerCharacter::Unparalyze() {
}

void APlayerCharacter::ToggleScanTool(bool Visible) {
}

void APlayerCharacter::ToggleHUDReleased() {
}

void APlayerCharacter::ToggleHUDPressed() {
}

void APlayerCharacter::ToggleHeadLight() {
}

void APlayerCharacter::ThrowFlareReleased() {
}

void APlayerCharacter::ThrowFlarePressed() {
}

void APlayerCharacter::ThrowFlare() {
}

void APlayerCharacter::StopUsingItem() {
}

void APlayerCharacter::StartTutorials(bool ResetTutorials) {
}

void APlayerCharacter::StartPerkActivation(UPerkHUDActivationWidget* PerkActivationWidget, float HoldTime) {
}

UAudioComponent* APlayerCharacter::SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

UAudioComponent* APlayerCharacter::SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

UAudioComponent* APlayerCharacter::SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

void APlayerCharacter::ShowSimpleHoldProgress(APlayerController* PlayerController, const FText& InDescription, float InProgress) {
}

void APlayerCharacter::SetStandingDown(bool standingDown) {
}

void APlayerCharacter::SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance) {
}

void APlayerCharacter::SetOutsideShieldGenerator(AShieldGeneratorActor* Shield) {
}

void APlayerCharacter::SetIsCharacterSelectionModel() {
}

void APlayerCharacter::SetInstantUsables_Implementation(bool Value) {
}

void APlayerCharacter::SetInsideShieldGenerator(AShieldGeneratorActor* Shield) {
}

void APlayerCharacter::SetInCharacterSelectionWorld() {
}

void APlayerCharacter::SetHeadLight_Implementation(bool On) {
}

void APlayerCharacter::SetFallbackPhysicalMaterial(UFSDPhysicalMaterial* PhysMat) {
}

void APlayerCharacter::SetCameraMode(ECharacterCameraMode NewCameraMode) {
}

void APlayerCharacter::SetAttached(USceneComponent* AttachTo, bool DelayUntilLanded) {
}

void APlayerCharacter::Server_TriggerDash_Implementation() {
}

void APlayerCharacter::Server_StartSalute_Implementation(UAnimMontage* startSalute) {
}

void APlayerCharacter::Server_Shouted_Implementation() {
}

void APlayerCharacter::Server_SetUsing_Implementation(bool characterIsUsing) {
}

void APlayerCharacter::Server_SetRunning_Implementation(bool characterIsRunning) {
}

void APlayerCharacter::Server_SetRunBoostActive_Implementation(bool IsActive) {
}

void APlayerCharacter::Server_SetIsThrowingCarriable_Implementation(bool isThrowing) {
}

void APlayerCharacter::Server_SetIsPressingMovementInput_Implementation(bool aIsPushingInput) {
}

void APlayerCharacter::Server_SetIsJumpPressed_Implementation(bool InJumpPressed) {
}

void APlayerCharacter::Server_SetDispenserReward_Implementation(AEventRewardDispenser* Dispenser, USchematic* Reward) {
}

void APlayerCharacter::Server_SetClientReady_Implementation() {
}

void APlayerCharacter::Server_InstantRevive_Implementation(APlayerCharacter* ReviveTarget, EInputKeys Key) {
}

void APlayerCharacter::Server_EscapeFromGrabber_Implementation() {
}

void APlayerCharacter::Server_CheatRevive_Implementation() {
}

void APlayerCharacter::Server_CheatKillAll_Implementation() {
}

void APlayerCharacter::Server_CheatGodMode_Implementation() {
}

void APlayerCharacter::Server_CheatFlyMode_Implementation(bool Active) {
}

void APlayerCharacter::Server_CheatDebugFastMode_Implementation(bool fast) {
}

void APlayerCharacter::Server_CancelThrowingCarriable_Implementation() {
}

void APlayerCharacter::Server_CallDonkey_Implementation() {
}

void APlayerCharacter::Server_AddImpulseToActor_Implementation(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse) {
}

void APlayerCharacter::Server_AddImpulse_Implementation(const FVector_NetQuantizeNormal& Direction, float force) {
}

void APlayerCharacter::SendLevelUpStatistics(const int32 currentRank) {
}

void APlayerCharacter::ReviveProgress(float Progress) {
}

void APlayerCharacter::RequestChangeInGravityScale_Implementation(float newGravityScale) {
}

void APlayerCharacter::RejectInvite() {
}





void APlayerCharacter::PilotVehicle(AActor* Vehicle) {
}

void APlayerCharacter::Paralyze(AActor* ParalyzedBy) {
}

void APlayerCharacter::OpenChat() {
}

void APlayerCharacter::OnResourceFull(UCappedResource* Resource) {
}

void APlayerCharacter::OnRep_IsStandingDown() {
}

void APlayerCharacter::OnRep_IsDancing() {
}

void APlayerCharacter::OnRep_HeadLightOn() {
}

void APlayerCharacter::OnRep_DanceMove() {
}

void APlayerCharacter::OnRep_CharacterState(UCharacterStateComponent* oldState) {
}


void APlayerCharacter::OnItemEquipped(AItem* Item) {
}

void APlayerCharacter::OnCharacterUsed(APlayerCharacter* User, EInputKeys Key) {
}

void APlayerCharacter::OnCharacterBeginUse(APlayerCharacter* User, EInputKeys Key) {
}

void APlayerCharacter::MouseWheelUp() {
}

void APlayerCharacter::MouseWheelDown() {
}

bool APlayerCharacter::LockIfState(ECharacterState LockIf, ECharacterState LockTo, bool canMoveAndAim) {
    return false;
}

void APlayerCharacter::JumpRelease() {
}

void APlayerCharacter::JumpPress() {
}

bool APlayerCharacter::IsWithinDistance(AActor* Source, float Distance) const {
    return false;
}

bool APlayerCharacter::IsWalking() const {
    return false;
}

bool APlayerCharacter::IsStateActive(ECharacterState State) const {
    return false;
}

bool APlayerCharacter::IsSaluting() const {
    return false;
}

bool APlayerCharacter::IsParalyzed() const {
    return false;
}

bool APlayerCharacter::IsMovementInputPressed() {
    return false;
}

bool APlayerCharacter::IsMining() const {
    return false;
}

bool APlayerCharacter::IsLyingDown() const {
    return false;
}

bool APlayerCharacter::IsJumpPressed() const {
    return false;
}

bool APlayerCharacter::IsInState(ECharacterState aState) const {
    return false;
}

bool APlayerCharacter::IsFrozen() const {
    return false;
}

bool APlayerCharacter::IsFirstPerson() const {
    return false;
}

bool APlayerCharacter::IsEquipepdActor(AActor* Actor) const {
    return false;
}

bool APlayerCharacter::IsDown() const {
    return false;
}

bool APlayerCharacter::IsAlive() const {
    return false;
}

void APlayerCharacter::InstantRevive(APlayerCharacter* ReviveTarget, EInputKeys Key) {
}

void APlayerCharacter::IgnoreInvite() {
}

bool APlayerCharacter::HasBeenRevived() const {
    return false;
}

UCharacterUseComponent* APlayerCharacter::GetUseComponent() const {
    return NULL;
}

UPlayerTPAnimInstance* APlayerCharacter::GetTPAnimInstance() const {
    return NULL;
}

float APlayerCharacter::GetTimeSinceLastRevival() const {
    return 0.0f;
}

ECharacterState APlayerCharacter::GetPreviousState() const {
    return ECharacterState::Walking;
}

AFSDPlayerState* APlayerCharacter::GetPlayerState() const {
    return NULL;
}

FString APlayerCharacter::GetPlayerName() const {
    return TEXT("");
}

AFSDPlayerController* APlayerCharacter::GetPlayerController() const {
    return NULL;
}

UInventoryList* APlayerCharacter::GetInventoryList() const {
    return NULL;
}

FText APlayerCharacter::GetHeroSwitchToMessage() const {
    return FText::GetEmpty();
}

FText APlayerCharacter::GetHeroName() const {
    return FText::GetEmpty();
}

FHeroInfo APlayerCharacter::GetHeroInfo() const {
    return FHeroInfo{};
}

UTexture2D* APlayerCharacter::GetHeroIcon() const {
    return NULL;
}

FLinearColor APlayerCharacter::GetHeroColor() const {
    return FLinearColor{};
}

UPlayerFPAnimInstance* APlayerCharacter::GetFPAnimInstance() const {
    return NULL;
}

AItem* APlayerCharacter::GetEquippedItem() const {
    return NULL;
}

float APlayerCharacter::GetDownTime() const {
    return 0.0f;
}

APlayerCharacter* APlayerCharacter::GetDownCameraTarget() const {
    return NULL;
}




ECharacterState APlayerCharacter::GetCurrentState() const {
    return ECharacterState::Walking;
}

UCommunicationComponent* APlayerCharacter::GetCommunicationComponent() const {
    return NULL;
}

float APlayerCharacter::GetClassXP() {
    return 0.0f;
}

UCharacterVanityComponent* APlayerCharacter::GetCharacterVanity() const {
    return NULL;
}

UCharacterStateComponent* APlayerCharacter::GetCharacterStateComponent(ECharacterState State) const {
    return NULL;
}

float APlayerCharacter::GetBeginRevivedProgress() const {
    return 0.0f;
}


FString APlayerCharacter::GetAnalyticsClass() const {
    return TEXT("");
}

FRotator APlayerCharacter::GetAimRotation() const {
    return FRotator{};
}

FVector APlayerCharacter::GetActorGroundLocation() const {
    return FVector{};
}

TArray<AShieldGeneratorActor*> APlayerCharacter::GetActiveShieldGenerators() {
    return TArray<AShieldGeneratorActor*>();
}

UPlayerAnimInstance* APlayerCharacter::GetActiveAnimInstance() const {
    return NULL;
}

void APlayerCharacter::ForceIsPressingMovementInputKey() {
}

void APlayerCharacter::ExitVehicle() {
}

void APlayerCharacter::CycleItemUp() {
}

void APlayerCharacter::CycleItemReleased() {
}

void APlayerCharacter::CycleItemPressed() {
}

void APlayerCharacter::CycleItemDown() {
}

void APlayerCharacter::ConsumeCycleItemButton() {
}

void APlayerCharacter::Client_TargetDamaged_Implementation(UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial) {
}

void APlayerCharacter::Client_AddImpulse_Implementation(const FVector_NetQuantizeNormal& Direction, float force) {
}

void APlayerCharacter::CheckWithoutAPaddleAchievement_Implementation() {
}

void APlayerCharacter::ChangeState(ECharacterState NewState) {
}

void APlayerCharacter::ChangeIfDifferentState(ECharacterState NewState) {
}

bool APlayerCharacter::CanEscapeFromGrabber() const {
    return false;
}

void APlayerCharacter::CallDonkeyReleased() {
}

void APlayerCharacter::CallDonkeyPressed() {
}



void APlayerCharacter::AnnounceSchematicCollected(USchematic* InSchematic) {
}

void APlayerCharacter::All_StartSalute_Implementation(UAnimMontage* saluteMontage) {
}

void APlayerCharacter::All_ShowImpactEffects_Implementation(UParticleSystem* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal Orientation) const {
}

void APlayerCharacter::All_ShowFieldMedicInstantReviveEffects_Implementation() {
}

void APlayerCharacter::AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse) {
}

void APlayerCharacter::AddImpulseFromVector(const FVector& Vector) {
}

void APlayerCharacter::AddImpulseFromDirectionAndForce(const FVector& Direction, float force) {
}

void APlayerCharacter::AcknowledgeCharacterState_Implementation(ECharacterState eState) {
}

void APlayerCharacter::AcceptInvite() {
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerCharacter, IsPressingMovementInputKey);
    DOREPLIFETIME(APlayerCharacter, ActiveCharacterState);
    DOREPLIFETIME(APlayerCharacter, IsRunning);
    DOREPLIFETIME(APlayerCharacter, HeadLightOn);
    DOREPLIFETIME(APlayerCharacter, IsUsing);
    DOREPLIFETIME(APlayerCharacter, IsStandingDown);
    DOREPLIFETIME(APlayerCharacter, IsDancing);
    DOREPLIFETIME(APlayerCharacter, DanceMove);
    DOREPLIFETIME(APlayerCharacter, PlayerIsLeavingInDroppod);
}

APlayerCharacter::APlayerCharacter() {
    this->HeightenedSenseComponent = NULL;
    this->ZipLineStateComponent = NULL;
    this->BoundPerkActivationW = NULL;
    this->PerkActivationTimer = -1.00f;
    this->GrabbedByClass = NULL;
    this->bIsBeingBittenByCaveLeech = false;
    this->WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteraction"));
    this->EquipLaserpointerHoldDuration = 0.33f;
    this->IsPressingMovementInputKey = false;
    this->characterID = NULL;
    this->FPMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPMesh"));
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->FirstPersonRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FPRoot"));
    this->ActorTracking = CreateDefaultSubobject<UActorTrackingComponent>(TEXT("ActorTracking"));
    this->IntoxicationComponent = NULL;
    this->MissionStatsCollector = CreateDefaultSubobject<UMissionStatsCollector>(TEXT("MissionStatsCollector"));
    this->ThirdPersonSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonSpringArm"));
    this->ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    this->ThirdPersonLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ThirdPersonLight"));
    this->FollowSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FollowSpringArm"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->DownCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("DownCamera"));
    this->CameraController = CreateDefaultSubobject<UCharacterCameraController>(TEXT("CameraController"));
    this->HealthComponent = CreateDefaultSubobject<UPlayerHealthComponent>(TEXT("Health"));
    this->SightComponent = CreateDefaultSubobject<UCharacterSightComponent>(TEXT("SightComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    this->UseComponentNew = CreateDefaultSubobject<UCharacterUseComponent>(TEXT("UseComponentNew"));
    this->UsableComponent = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UsableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->RecoilComponent = CreateDefaultSubobject<UCharacterRecoilComponent>(TEXT("RecoilComponent"));
    this->StatusEffectsComponent = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("StatusEffects"));
    this->PawnStatsComponent = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->PawnAfflictionComponent = CreateDefaultSubobject<UPlayerAfflictionComponent>(TEXT("PawnAfflictions"));
    this->PlayerInfoComponent = CreateDefaultSubobject<UPlayerInfoComponent>(TEXT("PlayerInfoComponent"));
    this->AttackerPositioningComponent = CreateDefaultSubobject<UPlayerAttackPositionComponent>(TEXT("AttackerPositioning"));
    this->CommunicationComponent = CreateDefaultSubobject<UCommunicationComponent>(TEXT("Communication"));
    this->TemperatureComponent = CreateDefaultSubobject<UPlayerTemperatureComponent>(TEXT("TemperatureComponent"));
    this->ReactiveTerrainTracker = CreateDefaultSubobject<UPlayerReactiveTerrainTrackerComponent>(TEXT("TerrainTracker"));
    this->TrackGrindUsableComponent = CreateDefaultSubobject<UInstantUsable>(TEXT("TrackGrindUsable"));
    this->RunningSpeed = 0.00f;
    this->RunBoost = 0.00f;
    this->RunBoostChargeTime = 0.00f;
    this->RunBoostActivationSound = NULL;
    this->RunBoostParticles = NULL;
    this->RunBoostAffliction = NULL;
    this->HangingPhysicsAsset = NULL;
    this->HangingSimulationBlend = 1.00f;
    this->IsPlayableCharacter = true;
    this->SprintSoundComponent = NULL;
    this->SpringSound = NULL;
    this->DownedCameraMinPitch = -75.00f;
    this->DownedCameraMaxPitch = 0.00f;
    this->TurnToFaceScannerAngularSpeed = 180.00f;
    this->Turn180Time = 0.50f;
    this->CarryingMovementSpeedPenalty = 0.50f;
    this->CarryingMaxFallVelocity = 1200.00f;
    this->MaxThrowProgress = 1.00f;
    this->MaxThrowHoldDuration = 2.00f;
    this->CarryingThrowMinForce = 100.00f;
    this->CarryingThrowMaxForce = 600.00f;
    this->CarryingThrowingStatusEffect = NULL;
    this->ThrowCarriableProgress = 0.00f;
    this->ActiveCharacterState = NULL;
    this->IsInDropPod = false;
    this->IsInEscapePod = false;
    this->ButtonMemoryDuration = 0.25f;
    this->IsRunning = false;
    this->CanDash = false;
    this->DashInputWindow = 0.30f;
    this->DashFowardMovementMinRequirement = 0.90f;
    this->DashRightMovementMaxRequirement = 0.10f;
    this->DashControllerMinValueRequired = 0.50f;
    this->DashCooldown = 1.00f;
    this->DashStatusEffect = NULL;
    this->ForwardInput = 0.00f;
    this->RightInput = 0.00f;
    this->ControllerForwardInput = 0.00f;
    this->ControllerRightInput = 0.00f;
    this->StoppedRunningTime = -1.00f;
    this->ShoutPressedTime = -1.00f;
    this->bIsUsingItemPressed = false;
    this->bIsUsingPressed = false;
    this->UsingDelay = 0.00f;
    this->HeadLightOn = true;
    this->IsUsing = false;
    this->JumpPressedTime = 0.00f;
    this->CanMove = true;
    this->CanAim = true;
    this->CanUseItem = true;
    this->CanChangeItems = true;
    this->CanMine = true;
    this->IsStandingDown = false;
    this->InDanceRange = false;
    this->IsDancing = false;
    this->DanceStartTime = 0.00f;
    this->HappyFeetAchievement = NULL;
    this->DanceMove = 0;
    this->CameraMode = ECharacterCameraMode::FirstPerson;
    this->IsInCharacterSelectionWorld = false;
    this->IdleTime = 0.00f;
    this->FPDrinkSalute = NULL;
    this->TPDrinkSalute = NULL;
    this->CurrentSaluteMontage = NULL;
    this->BlockTrackGrindOnLanded = false;
    this->RadarMaterialInstance = NULL;
    this->RadarMaterialAngleParameterIndex = 0;
    this->FallbackPhysicalMaterial = NULL;
    this->ClientReady = false;
    this->NextCharacterState = NULL;
    this->PlayerIsLeavingInDroppod = false;
    this->CanInstantRevive = false;
    this->HasInitializedPerks = false;
    this->CharacterVanity = CreateDefaultSubobject<UCharacterVanityComponent>(TEXT("CharacterVanity"));
}

