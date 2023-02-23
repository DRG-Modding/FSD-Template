#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "FlareGunProjectile.generated.h"

class ATeamTransport;

UCLASS(Blueprintable)
class AFlareGunProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFlareOn, meta=(AllowPrivateAccess=true))
    bool IsFlareOn;
    
    AFlareGunProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateLightDuration(float lightDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateShadowRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFlareOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlareIgnite();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlareExtinguish();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodImpact(ATeamTransport* DropPod);
    
public:
    UFUNCTION(BlueprintCallable)
    void Inhibit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateFlare();
    
};

