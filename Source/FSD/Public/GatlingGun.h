#pragma once
#include "CoreMinimal.h"
#include "BeltDrivenWeapon.h"
#include "GatlingGun.generated.h"

class AActor;
class UFXSystemAsset;
class UDamageComponent;
class UFSDPhysicalMaterial;

UCLASS()
class AGatlingGun : public ABeltDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* HotShellsTracerParticles;
    
    UPROPERTY(EditAnywhere)
    float HeatRemovedOnKill;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool CriticalOverheatEnabled;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HotShellsTracerOn)
    bool HotShellsOn;
    
    UPROPERTY(EditAnywhere)
    float HotShellsTemperatureRequired;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* BarrelProximityDamageComponent;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHotShellsOn(bool hotShellsIsOn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HotShellsTracerOn();
    
    UFUNCTION(BlueprintCallable)
    void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveHeat();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGatlingGun();
};

