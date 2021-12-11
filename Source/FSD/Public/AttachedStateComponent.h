#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "AttachedStateComponent.generated.h"

UCLASS(MinimalAPI)
class UAttachedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool DisableHeadLightOnEnter;
    
    UPROPERTY(EditAnywhere)
    bool EnableHeadLightOnExit;
    
protected:
    UPROPERTY(EditAnywhere)
    float MaxPitch;
    
public:
    UAttachedStateComponent();
};

