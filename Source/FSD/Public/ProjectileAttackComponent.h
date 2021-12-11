#pragma once
#include "CoreMinimal.h"
#include "ProjectileAttackBaseComponent.h"
#include "ProjectileAttackComponent.generated.h"

class UAnimMontage;

UCLASS()
class UProjectileAttackComponent : public UProjectileAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool ManualyComplete;
    
    UFUNCTION(BlueprintCallable)
    void AddAttackMontage(UAnimMontage* attackMontage);
    
public:
    UProjectileAttackComponent();
};

