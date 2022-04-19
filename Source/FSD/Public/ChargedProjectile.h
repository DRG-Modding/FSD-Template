#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "ChargedProjectile.generated.h"

UCLASS()
class AChargedProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool ExplodesWhenDead;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool PersistentExplosion;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool AoEDamageInFlight;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DirectDamageReduction;
    
public:
    AChargedProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAoEDamageEnabled();
    
};

