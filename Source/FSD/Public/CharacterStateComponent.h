#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlaySoundInterface.h"
#include "CharacterStateComponent.generated.h"

class APlayerCharacter;
class UDialogDataAsset;
class UPlayerMovementComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterStateComponent : public UActorComponent, public IPlaySoundInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EnterStateShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ExitStateShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AttentionShout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintPure)
    uint8 GetStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStateActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerMovementComponent* GetCharacterMovement() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

