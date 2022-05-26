#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileLauncherBaseComponent.h"
#include "ChargedProjectileLauncherComponent.generated.h"

class AProjectileBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChargedProjectileLauncherComponent : public UProjectileLauncherBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> NormalProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ChargedProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileChangeChargeValue;
    
public:
    UChargedProjectileLauncherComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProjectileClassCharged(TSubclassOf<AProjectileBase> NewProjectileClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass);
    
};

