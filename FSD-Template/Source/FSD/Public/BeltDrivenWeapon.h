#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BeltDrivenWeapon.generated.h"

class USoundCue;
class UAudioComponent;
class UCurveFloat;

UCLASS(Abstract)
class ABeltDrivenWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UAudioComponent* BarrelAudio;
    
    UPROPERTY(EditAnywhere)
    USoundCue* BarrelSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarrelFadeIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarrelFadeOut;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* BarrelPitchCurve;
    
    UPROPERTY(EditAnywhere)
    float BarrelSpinUpTime;
    
    UPROPERTY(EditAnywhere)
    float BarrelSpinDownTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentSpinRate;
    
    UPROPERTY(Replicated, Transient)
    bool Simulate_SpinBarrel;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopBarrel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartBarrel();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ABeltDrivenWeapon();
};

