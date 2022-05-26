#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "LineCutter.generated.h"

class UItemUpgrade;
class ALineCutterProjectile;
class AProjectileBase;

UCLASS(Blueprintable)
class ALineCutter : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopUsingReversesProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateProjectileUntillStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExplodeLastProjectileOnNextFireAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_LastProjectile)
    TWeakObjectPtr<ALineCutterProjectile> LastProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinExplosiveGoodbyeActivationTimme;
    
public:
    ALineCutter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopRotatingProjectile();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReverseLastProjectile();
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_DestroyOldProjectile();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastProjectile() const;
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileLaunched(AProjectileBase* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireWhileLastProjectileAlive(ALineCutterProjectile* Projectile);
    
};

