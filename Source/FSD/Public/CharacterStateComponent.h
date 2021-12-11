#pragma once
#include "CoreMinimal.h"
#include "PlaySoundInterface.h"
#include "Components/ActorComponent.h"
#include "CharacterStateComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;
class UPlayerMovementComponent;

UCLASS(Abstract, Blueprintable)
class UCharacterStateComponent : public UActorComponent, public IPlaySoundInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    uint8 StateId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* EnterStateShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ExitStateShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* AttentionShout;
    
private:
    UPROPERTY(Export, Transient)
    UPlayerMovementComponent* PlayerMovement;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateEnter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStateActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerMovementComponent* GetCharacterMovement() const;
    
public:
    UCharacterStateComponent();
    
    // Fix for true pure virtual functions not being implemented
};

