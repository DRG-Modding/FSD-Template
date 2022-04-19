#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlaySoundInterface.h"
#include "CharacterStateComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;
class UPlayerMovementComponent;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class UCharacterStateComponent : public UActorComponent, public IPlaySoundInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 StateId;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EnterStateShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ExitStateShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AttentionShout;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPlayerMovementComponent* PlayerMovement;
    
public:
    UCharacterStateComponent();
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
    
    
    // Fix for true pure virtual functions not being implemented
};

