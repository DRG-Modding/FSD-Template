#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "EInputKeys.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerTarget.h"
#include "BoscoController.generated.h"

class APlayerCharacter;
class UTerrainMaterial;
class UBehaviorTree;
class UDroneUseComponent;
class AActor;
class ACarriableItem;
class AFSDPlayerState;
class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoscoControllerOnFollowTargetChangedDelegate, AActor*, FollowTarget);

UCLASS()
class ABoscoController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(EditDefaultsOnly)
    float CheckOutOfTheWayInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistCountAsSameHit;
    
    UPROPERTY(BlueprintAssignable)
    FBoscoControllerOnFollowTargetChangedDelegate OnFollowTargetChangedDelegate;
    
protected:
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* HearthstoneCrystalMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchForEnemiesInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SaluteDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SaluteCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CheckGraberInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxThrowStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxThrowRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RepairRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceCountedAsClose;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TargetQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery AttackOnOrderQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery AttackOnSightQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery DefendTageQuery;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthPercentage;
    
    UPROPERTY(Export, Transient)
    UDroneUseComponent* CurrentUse;
    
    UPROPERTY()
    ACarriableItem* TryingToPickGem;
    
public:
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
    
public:
    ABoscoController();
};

