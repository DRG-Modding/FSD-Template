#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CrossbowProjectileControlled.generated.h"

class ACrossbowProjectileBase;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UCrossbowProjectileControlled : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileBase* CastedOwner;
    
public:
    UCrossbowProjectileControlled();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateHomingTarget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateHomingTarget(const FVector& Target);
    
    UFUNCTION(BlueprintCallable)
    void CancelControl();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_UpdateHomingTarget(const FVector& Target);
    
};

