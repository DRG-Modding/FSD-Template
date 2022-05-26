#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "JetPackItem.generated.h"

class UCurveFloat;
class UPlayerMovementComponent;

UCLASS(Abstract, Blueprintable)
class AJetPackItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VerticalAccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalDrift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Fuel, meta=(AllowPrivateAccess=true))
    float Fuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPlayerMovementComponent* CharacterMovement;
    
public:
    AJetPackItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopThruster();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartThruster();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Fuel(float OldFuel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_Active();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFuelChanged(float Value, float Delta);
    
};

