#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "RDGLauncher.generated.h"

class URDGComponent;

UCLASS(Abstract, Blueprintable)
class ARDGLauncher : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URDGComponent*> ActiveGrenades;
    
public:
    ARDGLauncher();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DetonateAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterGrenade(URDGComponent* Grenade);
    
};

