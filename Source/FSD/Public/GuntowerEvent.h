#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "GuntowerModuleLevel.h"
#include "GuntowerEvent.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UDamageComponent;
class AGuntowerModule;

UCLASS()
class AGuntowerEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuntowerModuleLevel> GuntowerLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModuleAttachBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TowerExplodeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenExplosions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGuntowerModule*> TowerModules;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ModuleActive, meta=(AllowPrivateAccess=true))
    int32 ActiveHostileModules;
    
public:
    AGuntowerEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnModules();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModuleActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModulesSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModuleExploded(AGuntowerModule* explodedModule);
    
};

