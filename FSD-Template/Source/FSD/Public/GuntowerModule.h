#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
#include "GuntowerModule.generated.h"

class UAnimSequenceBase;
class AActor;
class USoundCue;
class UParticleSystem;
class UStaticMeshComponent;
class UGunTowerHealthComponent;
class USkeletalMeshComponent;
class AGuntowerEvent;
class AGuntowerModule;

UCLASS()
class AGuntowerModule : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ExposeWeakpointSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* deathParticles;
    
    UPROPERTY(Transient)
    TArray<AActor*> WeakpointActors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BodyBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TopConnectionPointName;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FRotator CurrentTurretRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* IntroductionAnimation;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* ArmorPiece1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* ArmorPiece2;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* ArmorPiece3;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ModuleMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGunTowerHealthComponent* GuntowerModuleHealth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGuntowerEvent* OwningEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGuntowerModule* ChildModule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeakpointsExposedTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeakpointsExposedTimeSolo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HideArmorTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmorShootoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmorLaunchPower;
    
    UPROPERTY(Replicated, Transient)
    int32 ModuleID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPassiveModule;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsModuleActive)
    bool ModuleIsActive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AreWeakpointExposed)
    bool AreWeakpointsExposed;
    
    UPROPERTY(Replicated, Transient)
    bool AreWeaponsExposed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ConstantRotation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsArmorOff)
    bool IsArmorOff;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Exploded)
    bool Exploded;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShootOutArmor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetModuleActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTearArmor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsModuleActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsArmorOff();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Exploded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AreWeakpointExposed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivationChanged(bool IsActivated);
    
    UFUNCTION(BlueprintCallable)
    void Introduce();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideWeakpoints();
    
    UFUNCTION(BlueprintCallable)
    void HideArmor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModuleID() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoExplosion();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateTowerModule();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayIntroductionAnim();
    
    UFUNCTION(BlueprintCallable)
    void ActivateTowerModule();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGuntowerModule();
    
    // Fix for true pure virtual functions not being implemented
};

