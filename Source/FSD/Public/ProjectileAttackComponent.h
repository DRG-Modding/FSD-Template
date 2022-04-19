#pragma once
#include "CoreMinimal.h"
#include "ProjectileAttackBaseComponent.h"
#include "ProjectileAttackComponent.generated.h"

class UAnimMontage;

UCLASS(meta=(BlueprintSpawnableComponent))
class UProjectileAttackComponent : public UProjectileAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManualyComplete;
    
public:
    UProjectileAttackComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void AddAttackMontage(UAnimMontage* attackMontage);
    
};

