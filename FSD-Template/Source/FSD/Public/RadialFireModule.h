#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HostileGuntowerModule.h"
#include "UObject/NoExportTypes.h"
#include "RadialFireModule.generated.h"

class AProjectile;

UCLASS()
class ARadialFireModule : public AHostileGuntowerModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectile> projectileClass;
    
    UPROPERTY(Replicated, Transient)
    FRotator AttackEndRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationSpeedTurret;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBetweenShots;
    
    UPROPERTY(Replicated, Transient)
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LeftFireSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RightFireSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FrontFireSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BackFireSocket;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFire();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARadialFireModule();
};

