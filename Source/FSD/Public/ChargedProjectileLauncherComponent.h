#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileLauncherBaseComponent.h"
#include "ChargedProjectileLauncherComponent.generated.h"

class AProjectileBase;

UCLASS()
class UChargedProjectileLauncherComponent : public UProjectileLauncherBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectileBase> NormalProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectileBase> ChargedProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileChangeChargeValue;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProjectileClassCharged(TSubclassOf<AProjectileBase> NewProjectileClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass);
    
    UChargedProjectileLauncherComponent();
};

