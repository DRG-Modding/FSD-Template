#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "ParalyzedStateComponent.generated.h"

class AActor;

UCLASS(MinimalAPI)
class UParalyzedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> CaveLeechClass;
    
    UPROPERTY(EditAnywhere)
    float CameraArmHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float CameraArmSpeed;
    
public:
    UParalyzedStateComponent();
};

