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
    UPROPERTY(EditAnywhere, Transient)
    float ActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VerticalAccelerationCurve;
    
    UPROPERTY(EditAnywhere)
    float VerticalAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalDrift;
    
    UPROPERTY(EditAnywhere)
    float BurnDuration;
    
    UPROPERTY(EditAnywhere)
    float RechargeDuration;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Fuel)
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
    
    UFUNCTION()
    void OnRep_Fuel(float OldFuel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_Active();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFuelChanged(float Value, float Delta);
    
};

