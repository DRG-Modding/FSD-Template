#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERessuplyPodState.h"
#include "RessuplyPod.generated.h"

class ARessuplyPod;
class UDialogDataAsset;
class UDamageComponent;
class UCurveFloat;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRessuplyPodOnStateChanged, ARessuplyPod*, InPod, ERessuplyPodState, InState);

UCLASS()
class ARessuplyPod : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRessuplyPodOnStateChanged OnStateChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(EditAnywhere)
    float KillRadius;
    
    UPROPERTY(EditAnywhere)
    float DropHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropDelay;
    
    UPROPERTY(EditAnywhere)
    float MissionShoutDelay;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DialogOrderAccepted;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DialogPodArrived;
    
    UPROPERTY(Transient)
    UDialogDataAsset* CurrentMissionShout;
    
    UPROPERTY(Transient)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_State)
    ERessuplyPodState State;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TargetDropTime;
    
    UPROPERTY(Replicated, Transient)
    float ServerDropProgress;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DropCurve;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* PlayerSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    float CloseToImpactDistance;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIdling();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTunnelBLocked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(ERessuplyPodState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodCloseToImpact();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* DropToTarget(UObject* WorldContextObject, TSubclassOf<ARessuplyPod> podClass, const FVector& Location, AActor* requester);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARessuplyPod();
    
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

