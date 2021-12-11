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
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsMoving)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreFellOutOfWorld;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreOwnersCollision;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveIgnoreCharacter(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHitObject();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AThrowableActor();
};

