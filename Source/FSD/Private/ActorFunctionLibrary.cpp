#include "ActorFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class APlayerController;
class APlayerCharacter;
class UUserWidget;
class UObject;
class UEnemyComponent;
class UMaterialInstanceDynamic;
class USoundCue;
class UWindowWidget;
class AActor;
class UMeshComponent;
class UTexture2D;
class USceneComponent;
class UFXSystemAsset;
class UPathfinderCollisionComponent;
class UFSDPhysicalMaterial;
class UPlayerCharacterID;
class UItemID;
class UInventoryList;
class UHealthComponentBase;
class AFSDGameMode;
class UActorComponent;
class UPostProcessComponent;
class UBlendableInterface;
class IBlendableInterface;
class UDamageClass;
class AFSDGameState;

void UActorFunctionLibrary::UnlockSpecificCharacters(TArray<APlayerCharacter*> Characters, ECharacterState UnlockIf, ECharacterState UnlockTo) {
}

void UActorFunctionLibrary::UnlockCharacters(UObject* WorldContextObject) {
}

float UActorFunctionLibrary::TimeSince(UObject* WorldContextObject, float Time) {
    return 0.0f;
}

void UActorFunctionLibrary::SetScalarParameters(FName ParameterName, float Value, const TArray<UMaterialInstanceDynamic*>& Materials) {
}

void UActorFunctionLibrary::PlayCueOnClient(APlayerController* Target, USoundCue* cue) {
}

void UActorFunctionLibrary::PlayCueOnAll(UObject* WorldContextObject, USoundCue* cue) {
}

float UActorFunctionLibrary::PingPong(float Time, float Length, bool normalize) {
    return 0.0f;
}

float UActorFunctionLibrary::MoveTowards(float Current, float End, float step) {
    return 0.0f;
}

void UActorFunctionLibrary::LockSpecificCharactersIfState(TArray<APlayerCharacter*> Characters, ECharacterState stateToLock) {
}

void UActorFunctionLibrary::LockSpecificCharacters(TArray<APlayerCharacter*> Characters) {
}

bool UActorFunctionLibrary::LockSpecificCharacterIfState(APlayerCharacter* Character, ECharacterState LockIf, ECharacterState LockTo) {
    return false;
}

void UActorFunctionLibrary::LockCharacters(UObject* WorldContextObject) {
}

TSubclassOf<UWindowWidget> UActorFunctionLibrary::LoadWindowWidgetClass(TSoftClassPtr<UWindowWidget> WidgetClass) {
    return NULL;
}

TSubclassOf<UUserWidget> UActorFunctionLibrary::LoadWidgetClass(TSoftClassPtr<UUserWidget> WidgetClass) {
    return NULL;
}

UClass* UActorFunctionLibrary::LoadClass(TSoftClassPtr<UObject> softReference) {
    return NULL;
}

void UActorFunctionLibrary::KillActorWithEffects(AActor* Actor, USceneComponent* visualsToHide, USoundCue* deathSound, UFXSystemAsset* deathParticles, float particleScale, UPathfinderCollisionComponent* pathColliderToDisable) {
}

bool UActorFunctionLibrary::IsWeakPoint(UFSDPhysicalMaterial* Material) {
    return false;
}

bool UActorFunctionLibrary::IsSingleplayer(UObject* WorldContextObject) {
    return false;
}

bool UActorFunctionLibrary::IsInRangeOfLocalPlayer(AActor* toActor, float MinDistance, float MaxDistance) {
    return false;
}

bool UActorFunctionLibrary::IsCloseToLocalPlayer(AActor* toActor, float Distance) {
    return false;
}

int32 UActorFunctionLibrary::GetTotalHeroLevels(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0;
}

FGuid UActorFunctionLibrary::GetSaveGameIDFromCharacterID(UPlayerCharacterID* characterID) {
    return FGuid{};
}

FGuid UActorFunctionLibrary::GetSavegameID(UClass* objectClass) {
    return FGuid{};
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetPlayersInRange(UObject* WorldContextObject, const FVector& Origin, float Radius, bool MustBeAlive) {
    return TArray<APlayerCharacter*>();
}

UItemID* UActorFunctionLibrary::GetItemID(TSubclassOf<AActor> itemClass) {
    return NULL;
}

float UActorFunctionLibrary::GetHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0.0f;
}

FText UActorFunctionLibrary::GetHeroSwitchToMessage(TSubclassOf<APlayerCharacter> playerClass) {
    return FText::GetEmpty();
}

FString UActorFunctionLibrary::GetHeroSourceName(TSubclassOf<APlayerCharacter> playerClass) {
    return TEXT("");
}

float UActorFunctionLibrary::GetHeroProgress(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0.0f;
}

FText UActorFunctionLibrary::GetHeroName(TSubclassOf<APlayerCharacter> playerClass) {
    return FText::GetEmpty();
}

int32 UActorFunctionLibrary::GetHeroLevel(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0;
}

UInventoryList* UActorFunctionLibrary::GetHeroInventoryList(UPlayerCharacterID* characterID) {
    return NULL;
}

FHeroInfo UActorFunctionLibrary::GetHeroInfo(TSubclassOf<APlayerCharacter> playerClass) {
    return FHeroInfo{};
}

UTexture2D* UActorFunctionLibrary::GetHeroImageSmall(TSubclassOf<APlayerCharacter> playerClass) {
    return NULL;
}

UTexture2D* UActorFunctionLibrary::GetHeroImageFullSize(TSubclassOf<APlayerCharacter> playerClass) {
    return NULL;
}

UTexture2D* UActorFunctionLibrary::GetHeroImage(TSubclassOf<APlayerCharacter> playerClass) {
    return NULL;
}

FLinearColor UActorFunctionLibrary::GetHeroColor(TSubclassOf<APlayerCharacter> playerClass) {
    return FLinearColor{};
}

UActorComponent* UActorFunctionLibrary::GetComponentFromClass(TSubclassOf<AActor> Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

UActorComponent* UActorFunctionLibrary::GetComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

UPlayerCharacterID* UActorFunctionLibrary::GetCharacterIDFromCharacter(APlayerCharacter* Character) {
    return NULL;
}

UPlayerCharacterID* UActorFunctionLibrary::GetCharacterID(TSubclassOf<APlayerCharacter> playerClass) {
    return NULL;
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetAllPlayerCharacters(UObject* WorldContext) {
    return TArray<APlayerCharacter*>();
}

FVector UActorFunctionLibrary::GetActorTargetCenter(AActor* TargetActor) {
    return FVector{};
}

void UActorFunctionLibrary::FSDRemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void UActorFunctionLibrary::FSDRemoveAllWidgets(UObject* WorldContextObject) {
}

void UActorFunctionLibrary::FSDDumpCallStack(const FString& Msg) {
}

APlayerCharacter* UActorFunctionLibrary::FindNearestPlayerCharacter(UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight) {
    return NULL;
}

FVector UActorFunctionLibrary::FindLatejoinDroppodLocation(AFSDGameMode* GameMode) {
    return FVector{};
}

AActor* UActorFunctionLibrary::FindClosestEnemyFromLocation(const FVector& fromLocation, float range, bool LineOfSightCheck, UObject* WorldContextObject, const TArray<AActor*>& IgnoredActors, const FVector& Offset) {
    return NULL;
}

AActor* UActorFunctionLibrary::FindClosestEnemyFromActor(AActor* FromActor, float range, bool LineOfSightCheck, const FGameplayTagQuery& tagQuery, const FVector& Offset) {
    return NULL;
}

FVector UActorFunctionLibrary::FindCharacterTeleportLocation(UObject* WorldContextObject, const FVector& closeToLocation, float desiredDistance) {
    return FVector{};
}

void UActorFunctionLibrary::FadeMaterials(const UObject* WorldContextObject, UMeshComponent*& Mesh, float Duration) {
}

float UActorFunctionLibrary::EvaluateRuntimeCurve(UObject* WorldContextObject, const FRuntimeFloatCurve& Curve, float Time) {
    return 0.0f;
}

void UActorFunctionLibrary::DissolveMaterials(const UObject* WorldContextObject, UMeshComponent*& Mesh, float Duration) {
}

void UActorFunctionLibrary::DamagePlayersInArea(const FVector& Origin, AActor* Instigator, const float Damage, const float Radius, UDamageClass* DamageClass) {
}

UHealthComponentBase* UActorFunctionLibrary::DamageIfInRange(float MaxDistance, float Damage, AActor* Target, AActor* Attacker, UDamageClass* DamageClass) {
    return NULL;
}

void UActorFunctionLibrary::DamageAllInAreaExcept(const FVector Origin, AActor* Instigator, const float Damage, const float BlastRadius, const float MaxDamageRadius, const float minDamagePercent, const TArray<AActor*>& IgnoreActors, const float friendlyFireModifier, UDamageClass* DamageClass) {
}

void UActorFunctionLibrary::DamageAllInArea(const FVector Origin, AActor* Instigator, const float Damage, const float BlastRadius, const float MaxDamageRadius, const float minDamagePercent, const float friendlyFireModifier, UDamageClass* DamageClass) {
}

TArray<UMaterialInstanceDynamic*> UActorFunctionLibrary::CreateDynamicMaterialInstances(UMeshComponent* Mesh) {
    return TArray<UMaterialInstanceDynamic*>();
}

float UActorFunctionLibrary::AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float Amount) {
    return 0.0f;
}

void UActorFunctionLibrary::AddEnemyKill(APlayerCharacter* Instigator, UEnemyComponent* EnemyComponent, AFSDGameState* GameState) {
}

bool UActorFunctionLibrary::ActorMatchesTagQuery(const FGameplayTagQuery& Query, const AActor* InActor) {
    return false;
}

UActorFunctionLibrary::UActorFunctionLibrary() {
}

