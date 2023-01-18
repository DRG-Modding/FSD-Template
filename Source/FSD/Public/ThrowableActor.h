#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThrowableActor.generated.h"

class APlayerCharacter;
class UProjectileMovementComponent;

UCLASS(Blueprintable)
class AThrowableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreFellOutOfWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreOwnersCollision;
    
public:
    AThrowableActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveIgnoreCharacter(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHitObject();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
};

