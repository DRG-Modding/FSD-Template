#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "GraplingGunState.h"
#include "GrapplingHookGun.generated.h"

class UCoolDownItemAggregator;
class UAnimMontage;
class AGrapplingHookGun;

UCLASS(Abstract, Blueprintable)
class AGrapplingHookGun : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCoolDownItemAggregator* CoolDownAggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPReloadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPReloadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPGunslingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPGunslingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedReleaseModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AutoFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FGraplingGunState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrapleStartTime;
    
public:
    AGrapplingHookGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopGrapple();
    
    UFUNCTION(BlueprintCallable)
    bool StartGrapple();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(const FGraplingGunState& NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FGraplingGunState& prevState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReleaseHook();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleFailed(bool TooFar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrappleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindUpProgress() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCooldownDuration(TSubclassOf<AGrapplingHookGun> GrapplingHookGun);
    
    
    // Fix for true pure virtual functions not being implemented
};

