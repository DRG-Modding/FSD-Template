#pragma once
#include "CoreMinimal.h"
#include "EventParticipant.h"
#include "FSDPawn.h"
#include "UObject/NoExportTypes.h"
#include "GuntowerModule.generated.h"

class UParticleSystem;
class USoundCue;
class AActor;
class UStaticMeshComponent;
class UAnimSequenceBase;
class USkeletalMeshComponent;
class UGunTowerHealthComponent;
class AGuntowerEvent;
class AGuntowerModule;

UCLASS(Blueprintable)
class AGuntowerModule : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExposeWeakpointSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> WeakpointActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BodyBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TopConnectionPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentTurretRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IntroductionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ArmorPiece1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ArmorPiece2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ArmorPiece3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ModuleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGunTowerHealthComponent* GuntowerModuleHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGuntowerEvent* OwningEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGuntowerModule* ChildModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakpointsExposedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakpointsExposedTimeSolo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideArmorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorShootoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorLaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ModuleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPassiveModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsModuleActive, meta=(AllowPrivateAccess=true))
    bool ModuleIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AreWeakpointExposed, meta=(AllowPrivateAccess=true))
    bool AreWeakpointsExposed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AreWeaponsExposed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConstantRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsArmorOff, meta=(AllowPrivateAccess=true))
    bool IsArmorOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Exploded, meta=(AllowPrivateAccess=true))
    bool Exploded;
    
public:
    AGuntowerModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

