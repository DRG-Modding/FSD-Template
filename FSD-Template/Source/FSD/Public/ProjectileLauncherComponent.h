#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileLauncherBaseComponent.h"
#include "ProjectileLauncherComponent.generated.h"

class AProjectileBase;

UCLASS()
class UProjectileLauncherComponent : public UProjectileLauncherBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectileBase> projectileClass;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass);
    
    UProjectileLauncherComponent();
};

