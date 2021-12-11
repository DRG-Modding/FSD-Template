#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "ChargedProjectile.generated.h"

UCLASS()
class AChargedProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool ExplodesWhenDead;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool PersistentExplosion;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool AoEDamageInFlight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DirectDamageReduction;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAoEDamageEnabled();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AChargedProjectile();
};

