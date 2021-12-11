#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerMovementComponent.generated.h"

class USoundBase;
class UCharacterStateComponent;
class APlayerCharacter;
class AActor;

UCLASS()
class UPlayerMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool DebugFastMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* SlidingOnIceSound;
    
protected:
    UPROPERTY(EditAnywhere)
    float LedgeClimbZVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MovementPenalty;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UCharacterStateComponent> CurrentPhysUpdateState;
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGravityModifier(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    void AddGravityModifier(AActor* SourceActor, float effect);
    
    UPlayerMovementComponent();
};

