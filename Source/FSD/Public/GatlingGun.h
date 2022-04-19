#pragma once
#include "CoreMinimal.h"
#include "BeltDrivenWeapon.h"
#include "GatlingGun.generated.h"

class UDamageComponent;
class AActor;
class UFXSystemAsset;
class UFSDPhysicalMaterial;

UCLASS()
class AGatlingGun : public ABeltDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BarrelProximityDamageEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelProximityDamageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelProximityDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelProximityDamageLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenProximityDamageTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplierAtMaxStabilization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* HotShellsTracerParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatRemovedOnKill;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CriticalOverheatEnabled;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_HotShellsTracerOn, meta=(AllowPrivateAccess=true))
    bool HotShellsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotShellsTemperatureRequired;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* BarrelProximityDamageComponent;
    
public:
    AGatlingGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHotShellsOn(bool hotShellsIsOn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HotShellsTracerOn();
    
    UFUNCTION(BlueprintCallable)
    void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveHeat();
    
};

