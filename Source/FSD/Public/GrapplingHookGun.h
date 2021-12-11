#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "GraplingGunState.h"
#include "GrapplingHookGun.generated.h"

class AGrapplingHookGun;
class UCoolDownItemAggregator;
class UAnimMontage;

UCLASS(Abstract)
class AGrapplingHookGun : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCoolDownItemAggregator* CoolDownAggregator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPReloadAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPReloadAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPGunslingAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPGunslingAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedReleaseModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindUpTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool AutoFire;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_State)
    FGraplingGunState State;
    
    UPROPERTY(BlueprintReadOnly)
    float GrapleStartTime;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGrapplingHookGun();
    
    // Fix for true pure virtual functions not being implemented
};

