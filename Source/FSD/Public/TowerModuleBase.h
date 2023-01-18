#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGuntowerModuleState.h"
#include "EventParticipant.h"
#include "FSDPawn.h"
#include "TowerModuleBase.generated.h"

class UEnemyHealthComponent;
class UParticleSystem;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ATowerModuleBase : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ModuleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ArmorPlates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator ModuleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorLaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideArmorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModuleRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConstantRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EGuntowerModuleState State;
    
public:
    ATowerModuleBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EGuntowerModuleState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EGuntowerModuleState prevState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HideArmorPlates();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoAttack();
    
    
    // Fix for true pure virtual functions not being implemented
};

