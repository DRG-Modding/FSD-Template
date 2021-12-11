#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "CharacterStateComponent.h"
#include "FrozenStateComponent.generated.h"

class USoundBase;
class UFSDPhysicalMaterial;

UCLASS(MinimalAPI)
class UFrozenStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange DeFrostAmount;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioFreeFromIce;
    
    UPROPERTY(EditAnywhere)
    UFSDPhysicalMaterial* IcePhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    UFSDPhysicalMaterial* DwarfFleshMaterial;
    
    UPROPERTY(EditAnywhere)
    float SlowAnimationSpeed;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThawPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDefrosting();
    
public:
    UFrozenStateComponent();
};

