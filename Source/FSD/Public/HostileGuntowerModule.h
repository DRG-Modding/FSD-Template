#pragma once
#include "CoreMinimal.h"
#include "GuntowerModule.h"
#include "WeaponFireOwner.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HostileGuntowerModule.generated.h"

class APlayerCharacter;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class UEnemyComponent;
class UHealthComponentBase;

UCLASS()
class AHostileGuntowerModule : public AGuntowerModule, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DestroyedSmoke;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ModuleMaxHealth, meta=(AllowPrivateAccess=true))
    float ModuleMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator CurrentAimRotation;
    
public:
    AHostileGuntowerModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeakpointDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModuleMaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnModuleDied(UHealthComponentBase* Health);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

