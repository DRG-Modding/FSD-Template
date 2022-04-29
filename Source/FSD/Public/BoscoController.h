#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "LaserPointerTarget.h"
#include "FollowTargetChangedDelegate.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "BoscoController.generated.h"

class APlayerCharacter;
class UBehaviorTree;
class ACarriableItem;
class UTerrainMaterial;
class UDroneUseComponent;
class AFSDPlayerState;
class AActor;
class UHealthComponentBase;

UCLASS(Blueprintable)
class ABoscoController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(EditAnywhere)
    float CheckOutOfTheWayInterval;
    
    UPROPERTY(EditAnywhere)
    float DistCountAsSameHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowTargetChanged OnFollowTargetChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* HearthstoneCrystalMaterial;
    
    UPROPERTY(EditAnywhere)
    float SearchForEnemiesInterval;
    
    UPROPERTY(EditAnywhere)
    float SaluteDelay;
    
    UPROPERTY(EditAnywhere)
    float SaluteCooldown;
    
    UPROPERTY(EditAnywhere)
    float CheckGraberInterval;
    
    UPROPERTY(EditAnywhere)
    float MaxThrowStrength;
    
    UPROPERTY(EditAnywhere)
    float MaxThrowRange;
    
    UPROPERTY(EditAnywhere)
    float RepairRange;
    
    UPROPERTY(EditAnywhere)
    float DistanceCountedAsClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AttackOnOrderQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AttackOnSightQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DefendTageQuery;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDroneUseComponent* CurrentUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarriableItem* TryingToPickGem;
    
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
    void PickupGem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUseDone(int32 TimesUsed);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(AActor* aTarget, const FVector& aLocation);
    
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPointNearPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetFollowTarget();
    
    UFUNCTION(BlueprintCallable)
    void GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind);
    
    UFUNCTION(BlueprintCallable)
    void GemUsed(APlayerCharacter* usedBy, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmPickup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CarriableDrop();
    
};

