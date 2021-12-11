#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "MiningPodDialogs.h"
#include "UObject/NoExportTypes.h"
#include "EMiningPodMission.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMiningPodState.h"
#include "EMiningPodRampState.h"
#include "UObject/NoExportTypes.h"
#include "MiningPod.generated.h"

class UAutoCarverComponent;
class UCurveFloat;
class UBoxComponent;
class UOutlineComponent;
class UObjectivesManager;
class AMiningPod;
class UObject;
class AMolly;

UCLASS()
class AMiningPod : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropHeight;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Replicated)
    FVector TargetLocation;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAutoCarverComponent* AutoCarver;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DropCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DepartCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CarverDropCurve;
    
    UPROPERTY(EditAnywhere)
    float CarverRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector CarverScale;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* DwarfCheckerBox;
    
    UPROPERTY(EditAnywhere)
    float DepartureTime;
    
    UPROPERTY(EditAnywhere)
    FText DepartueCountdownName;
    
    UPROPERTY(EditAnywhere)
    FMiningPodDialogs Dialogs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMiningPodMission MissionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasLanded;
    
    UPROPERTY(Export, Transient)
    UOutlineComponent* PodOutline;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EMiningPodState State;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_RampState)
    EMiningPodRampState rampState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetDropTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetDepartureTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToDrop;
    
    UPROPERTY(Export, Transient)
    UObjectivesManager* ObjectivesManager;
    
public:
    UFUNCTION(BlueprintCallable)
    static AMiningPod* SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRampState(EMiningPodRampState NewRampState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMuleInstance(AMolly* Donkey);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void RecieveReturnTimerFifteenSecondWarning();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void RecieveReturnTimerExpired();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PrepForTakeOff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PowerUp();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PoweredUp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_RampState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepForTakeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPoweringUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPoweredUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostInsidePod(bool isInside);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrillingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeparting();
    
    UFUNCTION(BlueprintCallable)
    void OnCountdownFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCountdownChanged(int32 newTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllDwavesInsidePod(bool AllInside);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeToDeparture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasLanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDonkeyReturnPickupLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceTakeoff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitSpacerig();
    
    UFUNCTION(BlueprintCallable)
    static void DropToTarget(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& dropLocation, int32 DropDelay);
    
    UFUNCTION(BlueprintCallable)
    static AMiningPod* DropToMission(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DepositAllPlayersMaterials();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Depart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CorrectLocationsForSpawnedOnLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    static FVector AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AMiningPod();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

