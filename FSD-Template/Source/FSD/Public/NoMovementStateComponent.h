#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "NoMovementStateComponent.generated.h"

UCLASS(MinimalAPI)
class UNoMovementStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool DisableHeadLightOnEnter;
    
    UPROPERTY(EditAnywhere)
    bool EnableHeadLightOnExit;
    
    UNoMovementStateComponent();
};

