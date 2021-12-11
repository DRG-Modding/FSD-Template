#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "FlareGunProjectile.generated.h"

class AMiningPod;

UCLASS()
class AFlareGunProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsFlareOn)
    bool IsFlareOn;
    
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
    void OnDroppodImpact(AMiningPod* DropPod);
    
public:
    UFUNCTION(BlueprintCallable)
    void Inhibit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateFlare();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFlareGunProjectile();
};

