#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EInputKeys.h"
#include "FSDAIController.h"
#include "FollowTargetChangedDelegate.h"
#include "LaserPointerTarget.h"
#include "Templates/SubclassOf.h"
#include "BoscoController.generated.h"

class AActor;
class AFSDPlayerState;
class APlayerCharacter;
class UBehaviorTree;
class UDroneUseComponent;
class UHealthComponentBase;
class UTerrainMaterial;

UCLASS(Blueprintable)
class ABoscoController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckOutOfTheWayInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistCountAsSameHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowTargetChanged OnFollowTargetChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* HearthstoneCrystalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterial*> PlagueMaterials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> VacuumableTypes;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> VacuumTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchForEnemiesInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckGraberInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrowStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrowRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceCountedAsClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AttackOnOrderQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AttackOnSightQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DefendTageQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery VacuumTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDroneUseComponent* CurrentUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TryingToPickItem;
    
public:
    ABoscoController();
    UFUNCTION(BlueprintCallable)
    void ReviveTarget();
    
    UFUNCTION(BlueprintCallable)
    void ResetToFollowState();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterPlayer(APlayerCharacter* APlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void PickupItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUseDone(int32 TimesUsed);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerShout(APlayerCharacter* APlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSalute(APlayerCharacter* aCharacater);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeave(AFSDPlayerState* APlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnLaserPointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnJobFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEscortTargetDied(UHealthComponentBase* Health);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCarriedUsed(APlayerCharacter* usedBy, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPointNearPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetFollowTarget();
    
    UFUNCTION(BlueprintCallable)
    void GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmPickup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CarriableDrop();
    
};

