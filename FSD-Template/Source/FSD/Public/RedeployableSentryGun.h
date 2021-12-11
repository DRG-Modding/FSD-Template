#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SentryGun.h"
#include "ERedeployableSentryGunState.h"
#include "RedeployableSentryGun.generated.h"

class UActorTrackingComponent;
class ARedeployableSentryGun;
class AActor;
class UOutlineComponent;
class ASentryElectroBeam;
class APlayerCharacter;
class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedeployableSentryGunOnStateChanged, ARedeployableSentryGun*, Sender, ERedeployableSentryGunState, NewState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRedeployableSentryGunOnDeployFinished);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRedeployableSentryGunOnDismantleFinished);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRedeployableSentryGunOnDeployProgressEvent, float, Progress);

UCLASS(Abstract)
class ARedeployableSentryGun : public ASentryGun {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRedeployableSentryGunOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FRedeployableSentryGunOnDeployFinished OnDeployFinished;
    
    UPROPERTY(BlueprintAssignable)
    FRedeployableSentryGunOnDismantleFinished OnDismantleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FRedeployableSentryGunOnDeployProgressEvent OnDeployProgressEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UActorTrackingComponent* ActorTrackingIcon;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SentryGunOwner)
    TWeakObjectPtr<APlayerCharacter> SentryGunOwner;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOutlineAndIconVisible;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    ERedeployableSentryGunState State;
    
    UPROPERTY(EditAnywhere)
    float PlasmaLineMaxRange;
    
    UPROPERTY(Transient)
    TArray<ASentryElectroBeam*> PlasmaLines;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASentryElectroBeam> PlasmaBeamClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ElectrocutionActorClass;
    
    UPROPERTY(Transient)
    AActor* ElectrocutionActor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> EMPDischargeActorClass;
    
    UPROPERTY(EditAnywhere)
    float EMPDiscargeCooldown;
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleOutlineAndIcon(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetSentryGunOwner(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnSentryGunOwnerChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDismantled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDismantle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDeployed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDeploy();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(ERedeployableSentryGunState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SentryGunOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnElectrocutionActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDismantled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDeployed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimDuration(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DismantleFinished();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Dismantle();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeployFinished();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Deploy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ActivateSpecialAttack();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARedeployableSentryGun();
};

