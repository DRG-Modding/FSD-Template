#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PilotingStateComponent.generated.h"

class AActor;

UCLASS(MinimalAPI)
class UPilotingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Vehicle)
    AActor* Vehicle;
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Vehicle();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPilotingStateComponent();
};

