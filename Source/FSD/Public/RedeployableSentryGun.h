#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SentryGun.h"
#include "ERedeployableSentryGunState.h"
#include "RedeployableSentryGun.generated.h"

class AActor;
class ARedeployableSentryGun;
class UActorTrackingComponent;
class UOutlineComponent;
class APlayerCharacter;
class ASentryElectroBeam;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ARedeployableSentryGun : public ASentryGun {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChanged, ARedeployableSentryGun*, Sender, ERedeployableSentryGunState, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDismantleFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeployProgress, float, Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeployFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployFinished OnDeployFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDismantleFinished OnDismantleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeployProgress OnDeployProgressEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UActorTrackingComponent* ActorTrackingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_SentryGunOwner)
    TWeakObjectPtr<APlayerCharacter> SentryGunOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutlineAndIconVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ERedeployableSentryGunState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlasmaLineMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASentryElectroBeam*> PlasmaLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASentryElectroBeam> PlasmaBeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ElectrocutionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ElectrocutionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EMPDischargeActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EMPDiscargeCooldown;
    
public:
    ARedeployableSentryGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

