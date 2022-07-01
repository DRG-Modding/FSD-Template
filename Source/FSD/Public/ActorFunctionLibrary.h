#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterState.h"
#include "UObject/NoExportTypes.h"
#include "HeroInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Curves/CurveFloat.h"
#include "ActorFunctionLibrary.generated.h"

class APlayerController;
class APlayerCharacter;
class UObject;
class UEnemyComponent;
class UMaterialInstanceDynamic;
class USoundCue;
class UWindowWidget;
class UUserWidget;
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

UCLASS(Blueprintable)
class FSD_API UActorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnlockSpecificCharacters(TArray<APlayerCharacter*> Characters, ECharacterState UnlockIf, ECharacterState UnlockTo);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockCharacters(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TimeSince(UObject* WorldContextObject, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameters(FName ParameterName, float Value, const TArray<UMaterialInstanceDynamic*>& Materials);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlayCueOnClient(APlayerController* Target, USoundCue* cue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlayCueOnAll(UObject* WorldContextObject, USoundCue* cue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PingPong(float Time, float Length, bool normalize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MoveTowards(float Current, float End, float step);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockSpecificCharactersIfState(TArray<APlayerCharacter*> Characters, ECharacterState stateToLock);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockSpecificCharacters(TArray<APlayerCharacter*> Characters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool LockSpecificCharacterIfState(APlayerCharacter* Character, ECharacterState LockIf, ECharacterState LockTo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockCharacters(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UWindowWidget> LoadWindowWidgetClass(TSoftClassPtr<UWindowWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UUserWidget> LoadWidgetClass(TSoftClassPtr<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadClass(TSoftClassPtr<UObject> softReference);
    
    UFUNCTION(BlueprintCallable)
    static void KillActorWithEffects(AActor* Actor, USceneComponent* visualsToHide, USoundCue* deathSound, UFXSystemAsset* deathParticles, float particleScale, UPathfinderCollisionComponent* pathColliderToDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWeakPoint(UFSDPhysicalMaterial* Material);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static bool IsSingleplayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInRangeOfLocalPlayer(AActor* toActor, float MinDistance, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCloseToLocalPlayer(AActor* toActor, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalHeroLevels(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSaveGameIDFromCharacterID(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSavegameID(UClass* objectClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<APlayerCharacter*> GetPlayersInRange(UObject* WorldContextObject, const FVector& Origin, float Radius, bool MustBeAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItemID* GetItemID(TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHeroSwitchToMessage(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHeroSourceName(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHeroProgress(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHeroName(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHeroLevel(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInventoryList* GetHeroInventoryList(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHeroInfo GetHeroInfo(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetHeroImageSmall(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetHeroImageFullSize(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetHeroImage(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetHeroColor(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetComponentFromClass(TSubclassOf<AActor> Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerCharacterID* GetCharacterIDFromCharacter(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerCharacterID* GetCharacterID(TSubclassOf<APlayerCharacter> playerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<APlayerCharacter*> GetAllPlayerCharacters(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetActorTargetCenter(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static void FSDRemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable)
    static void FSDRemoveAllWidgets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FSDDumpCallStack(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* FindNearestPlayerCharacter(UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FVector FindLatejoinDroppodLocation(AFSDGameMode* GameMode);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindClosestEnemyFromLocation(const FVector& fromLocation, float range, bool LineOfSightCheck, UObject* WorldContextObject, const TArray<AActor*>& IgnoredActors, const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindClosestEnemyFromActor(AActor* FromActor, float range, bool LineOfSightCheck, const FGameplayTagQuery& tagQuery, const FVector& Offset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FVector FindCharacterTeleportLocation(UObject* WorldContextObject, const FVector& closeToLocation, float desiredDistance);
    
    UFUNCTION(BlueprintCallable)
    static void FadeMaterials(const UObject* WorldContextObject, UMeshComponent*& Mesh, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float EvaluateRuntimeCurve(UObject* WorldContextObject, const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void DissolveMaterials(const UObject* WorldContextObject, UMeshComponent*& Mesh, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DamagePlayersInArea(const FVector& Origin, AActor* Instigator, const float Damage, const float Radius, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UHealthComponentBase* DamageIfInRange(float MaxDistance, float Damage, AActor* Target, AActor* Attacker, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DamageAllInAreaExcept(const FVector Origin, AActor* Instigator, const float Damage, const float BlastRadius, const float MaxDamageRadius, const float minDamagePercent, const TArray<AActor*>& IgnoreActors, const float friendlyFireModifier, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DamageAllInArea(const FVector Origin, AActor* Instigator, const float Damage, const float BlastRadius, const float MaxDamageRadius, const float minDamagePercent, const float friendlyFireModifier, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstances(UMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static float AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float Amount);
    
    UFUNCTION(BlueprintCallable)
    static void AddEnemyKill(APlayerCharacter* Instigator, UEnemyComponent* EnemyComponent, AFSDGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActorMatchesTagQuery(const FGameplayTagQuery& Query, const AActor* InActor);
    
};

