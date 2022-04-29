#pragma once
#include "CoreMinimal.h"
#include "BeltDrivenWeapon.h"
#include "GatlingGun.generated.h"

class UDamageComponent;
class UFXSystemAsset;
class AActor;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class AGatlingGun : public ABeltDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BarrelProximityDamageEnabled;
    
    UPROPERTY(EditAnywhere)
    float BarrelProximityDamageDistance;
    
    UPROPERTY(EditAnywhere)
    float BarrelProximityDamageRadius;
    
    UPROPERTY(EditAnywhere)
    float BarrelProximityDamageLength;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenProximityDamageTicks;
    
    UPROPERTY(EditAnywhere)
    float DamageMultiplierAtMaxStabilization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* HotShellsTracerParticles;
    
    UPROPERTY(EditAnywhere)
    float HeatRemovedOnKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CriticalOverheatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HotShellsTracerOn, meta=(AllowPrivateAccess=true))
    bool HotShellsOn;
    
    UPROPERTY(EditAnywhere)
    float HotShellsTemperatureRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* BarrelProximityDamageComponent;
    
public:
    AGatlingGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHotShellsOn(bool hotShellsIsOn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HotShellsTracerOn();
    
    UFUNCTION()
    void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveHeat();
    
};

