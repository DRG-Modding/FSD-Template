#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "RDGLauncher.generated.h"

class URDGComponent;

UCLASS(Abstract)
class ARDGLauncher : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<URDGComponent*> ActiveGrenades;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DetonateAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterGrenade(URDGComponent* Grenade);
    
    ARDGLauncher();
};

