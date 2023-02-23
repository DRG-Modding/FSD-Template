#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EMiningPodMission.h"
#include "EMiningPodRampState.h"
#include "EMiningPodState.h"
#include "Templates/SubclassOf.h"
#include "TeamTransport.generated.h"

class AMolly;
class ATeamTransport;
class UAutoCarverComponent;
class UBoxComponent;
class UCurveFloat;
class UObject;
class UObjectivesManager;
class UOutlineComponent;

UCLASS(Blueprintable)
class FSD_API ATeamTransport : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAutoCarverComponent* AutoCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DropCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DepartCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CarverDropCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarverRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CarverScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DwarfCheckerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepartureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DepartueCountdownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiningPodMission MissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WaitForPlayerSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOutlineComponent* PodOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EMiningPodState TransportState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RampState, meta=(AllowPrivateAccess=true))
    EMiningPodRampState rampState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDropTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDepartureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObjectivesManager* ObjectivesManager;
    
public:
    ATeamTransport();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATeamTransport* SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FTransform& Transform);
    
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
    void ForceTakeoff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitSpacerig();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DropToTarget(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FTransform& dropLocation, int32 DropDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATeamTransport* DropToMission(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DepositAllPlayersMaterials();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Depart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CorrectLocationsForSpawnedOnLocation();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObjet"))
    static FVector AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation, float maxDownAdjustment);
    
    
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

