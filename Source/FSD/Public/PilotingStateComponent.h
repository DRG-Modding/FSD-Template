#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PilotingStateComponent.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPilotingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Vehicle, meta=(AllowPrivateAccess=true))
    AActor* Vehicle;
    
public:
    UPilotingStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Vehicle();
    
};

