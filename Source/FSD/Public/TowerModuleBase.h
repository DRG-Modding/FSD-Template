#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
#include "EGuntowerModuleState.h"
#include "TowerModuleBase.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UEnemyHealthComponent;
class USkeletalMesh;
class USoundCue;
class UParticleSystem;

UCLASS()
class ATowerModuleBase : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* ModuleMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<UStaticMeshComponent*> ArmorPlates;
    
    UPROPERTY(Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(Replicated, Transient)
    FRotator ModuleRotation;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* deathParticles;
    
    UPROPERTY(EditAnywhere)
    float ArmorLaunchPower;
    
    UPROPERTY(EditAnywhere)
    float HideArmorTime;
    
    UPROPERTY(EditAnywhere)
    float ModuleRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    bool ConstantRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EGuntowerModuleState State;
    
public:
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
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATowerModuleBase();
    
    // Fix for true pure virtual functions not being implemented
};

