#pragma once
#include "CoreMinimal.h"
#include "GuntowerModule.h"
#include "WeaponFireOwner.h"
#include "UObject/NoExportTypes.h"
#include "HostileGuntowerModule.generated.h"

class USkeletalMeshComponent;
class UParticleSystemComponent;
class UEnemyComponent;
class UHealthComponentBase;

UCLASS()
class AHostileGuntowerModule : public AGuntowerModule, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* DestroyedMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* DestroyedSmoke;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ModuleMaxHealth)
    float ModuleMaxHealth;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FRotator CurrentAimRotation;
    
    UFUNCTION(BlueprintCallable)
    void OnWeakpointDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModuleMaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnModuleDied(UHealthComponentBase* Health);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AHostileGuntowerModule();
    
    // Fix for true pure virtual functions not being implemented
};

