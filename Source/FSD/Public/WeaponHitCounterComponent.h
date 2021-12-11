#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponHitCounterComponent.generated.h"

class UWeaponHitCountEffect;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;
class AActor;

UCLASS()
class UWeaponHitCounterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UWeaponHitCountEffect* HitEffect;
    
    UPROPERTY(EditAnywhere)
    bool RequiresWeakpointHit;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnReloading();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedUsing();
    
    UFUNCTION(BlueprintCallable)
    void OnReloading();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<AActor>>& Targets);
    
public:
    UWeaponHitCounterComponent();
};

