#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BeltDrivenWeapon.generated.h"

class UCurveFloat;
class UAudioComponent;
class USoundCue;

UCLASS(Abstract, Blueprintable)
class ABeltDrivenWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* BarrelAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BarrelSound;
    
    UPROPERTY(EditAnywhere)
    float BarrelFadeIn;
    
    UPROPERTY(EditAnywhere)
    float BarrelFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BarrelPitchCurve;
    
    UPROPERTY(EditAnywhere)
    float BarrelSpinUpTime;
    
    UPROPERTY(EditAnywhere)
    float BarrelSpinDownTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentSpinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Simulate_SpinBarrel;
    
public:
    ABeltDrivenWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopBarrel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartBarrel();
    
};

