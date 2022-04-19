#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThrowableActor.generated.h"

class UProjectileMovementComponent;
class APlayerCharacter;

UCLASS()
class AThrowableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
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

